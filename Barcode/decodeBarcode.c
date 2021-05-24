#include "prototype.h"

#define CHARSIZE 6
#define NUMCODE 12

const char signalCode[2][NUMCODE][CHARSIZE] = {
    {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "-", "s"},
    {"00001", "10001", "01001", "11001", "00101", "10100", "01100", "00011", "10010", "10000", "00100", "00110"}};

char * readScannerSignal(char * fileName){
    int i = 0;
    int j = 0;
    int counter = 0;
    int num;
    float signalScanner;
 
    FILE * file = fopen(fileName, "r");
    if (file == NULL) 
        { 
        printf("File does not exist"); 
        exit(1); 
        }
 
    // Fisrt number from the file - number of raw signals
    fscanf(file, " %d", &num); 

    // Scan the raw signal from the input file
    char * rawSignal = (char*)malloc(sizeof(char)*num);
    if(rawSignal == NULL){
        perror("ERROR in readScannerSignal()");
    }

    while (fscanf(file, " %f", &signalScanner) == 1) {
        rawSignal[i++] = roundNo(signalScanner) +'0';
    }
    rawSignal[i]='\0';

    return rawSignal;
}

char * decodeRawSignal(char * rawSignal){
     
    int i = 0;
    int j = 0;
    int counter = 0;
    int lenRawSignal = strlen(rawSignal);
    char * coolestVariableName = (char*)malloc(sizeof(char) * lenRawSignal);
    if(coolestVariableName == NULL){
        perror("ERROR in decodeRawSignal()");
    }
    
    for(; i<lenRawSignal; i++){
        if(rawSignal[i] == '0'){
            if(checkNoise(rawSignal,i)){
                if(rawSignal[i+1] == '0'){
                    coolestVariableName[j++] = '1';
                    i++;
                }else if(rawSignal[i]){
                    coolestVariableName[j++] = '0';
                }
            }else{
                break;
            }
        }else if(rawSignal[i] == '1'){
            
        }
    }
    coolestVariableName[j]='\0';

    return coolestVariableName;
}

int checkNoise(char * rawSignal, int i){
    if((rawSignal[i+2] != '0') && (rawSignal[i+3] != '0')){
        if((rawSignal[i-2] != '0') && (rawSignal[i-3] != '0')){
            return 0;
        }else{
            return 1;
        }
    }
}

int checkStartStop(char * signal){

    // Read the first and last five digits from the signal
    char first[6];
    char last[6];
    
    int lenSignal = strlen(signal);
    int j = lenSignal-5;
    int i;
    for(i=0; i<5; i++,j++){
        first[i] = signal[i];
        last[i] = signal[j];            
    } 
    first[i] ='\0';
    last[i] = '\0';

    // Compare the signal for start/stop and reverse
    if(!strcmp(first, signalCode[1][11])){
        if(!strcmp(first, last)){   //check do we have a regular start/stop pair
            return 0;
        }else{      //only start code is scanned
            printf("\nBarcode truncated. Move the scanner to the right.\n");
            exit(1);
        }
    }else if(!strcmp(last, signalCode[1][11])){ //only stop code is scanned
            printf("\nBarcode truncated. Move the scanner to the left.\n");
            exit(1);
    }else if(!strcmp(first, signalCode[1][6])){
        if(!strcmp(first, last)){   //check do we have a reverse start/stop pair
            return 1;
        }else{      //only stop code is scanned
            printf("\nBarcode truncated. Move the scanner to the left.\n");
            exit(1);
        }
    }else if(!strcmp(last, signalCode[1][11])){ //only start code is scanned
            printf("\nBarcode truncated. Move the scanner to the right.\n");
            exit(1);
    }else{  // code without start or stop signal is scanned
        printf("\nTry scanning again.\n");
        exit(1);
    }
}

void decodeSignal(char * signal){

    int flag  = checkStartStop(signal); // 0-regular start/stop ; 1-reverse start/stop
    if(flag){
        reverseString(signal);
    }

    int lenSimbols; // simbols in the barcode
    int lenSignal = strlen(signal) - 10; // without the signal for start/stop code

    if(lenSignal%5 != 0){   // check for clear signal for each five digit sequence
        printf("\nBarcode inconsistent. Try scanning again.\n");
        exit(1);
    }else if ((lenSignal/5) > 1){   // 
        lenSimbols = lenSignal/5;
    }else{
        printf("\nBarcode too short. Try scanning again.\n");
        exit(1);
    }

    // Decode signal
    typedef struct {
        char code[lenSimbols][CHARSIZE];
        char simbol[lenSimbols+1];
        int weight[lenSimbols];
    }Barcode;

    Barcode barcode_t;

    int i;
    int j;
    int pos = 5; // position after the start signal

    for(i=0; i < lenSimbols; i++){
        for(j=0;j<5;j++){
            barcode_t.code[i][j] = signal[pos++];
        }
        barcode_t.code[i][j] ='\0';
        for (int h=0; h<NUMCODE; h++){    
            if (!strcmp(barcode_t.code[i], signalCode[1][h])){
                barcode_t.simbol[i]= signalCode[0][h][0];
                barcode_t.weight[i]=h;
            }
        }
    }

    barcode_t.simbol[i]='\0';

    // Validation of check digits
    int n = lenSimbols-1;
    int * p = barcode_t.weight;
    if(validateCode(n,p)){
        printf("ERROR Code is not valid.");
        exit(1);
    }
    
    //Print result
    barcode_t.simbol[lenSimbols-2]='\0';
    printf("\nResult: %s", barcode_t.simbol);
}

char reverseString(char *string){
    int character;
    int i;
    int j;
    for (i = 0, j = strlen(string) - 1; i < j; i++, j--){
        character = string[i];
        string[i] = string[j];
        string[j] = character;
    }
    return *string;
}

int roundNo(float num){
    if(num>0.47){
        num=1;
    }else{
        num=0;
    }
    return (int)num;
}

int validateCode(int n,int * arr){
    int C=arr[n-1];
    int K=arr[n-2];
    int checkC = equationC(n,arr);
    int checkK = equationK(n,arr);
    if(C==checkC && K==checkK){
        return 1;
    }
    return 0;
}

int equationC(int n, int * arr){
    int i;
    int sum=0;
    for(i=1; i<=n;i++){
        sum= (((n-i)%10 + 1) * arr[i-1]);
    }
    return sum%11;
}

int equationK(int n, int * arr){
    int i;
    int sum=0;
    for(i=1; i <= n+1; i++){
        sum= (((n-i+1)%9 + 1) * arr[i-1]);
    }
    return sum%11;
}


