#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    size_t len = argc;
    int i=0;
    int j=0;
    int arrLen;

    //CHECK FOR NUMBER OF ARGUMENTS
    if(argc!=3){
        printf("ERROR %s : two arguments needed.", argv[0]);
        return 1;
    }

    // CHECK ARRAYS LENGHT
    if(strlen(argv[1]) != strlen(argv[2])){
        printf("ERROR %s : two argument arrays must be same lenght.", argv[0]);
        return 2;
    }else arrLen=strlen(argv[1]);

    
    // CHECK FOR CHARACTER AND SIMBOLS
    for(int j=1; j<3; j++){
        for(i=0;i<arrLen;i++){
                if(argv[j][i]<'0' || argv[j][i]>'9'){
                    printf("ERROR %s : the array contains character or simbol.", argv[0]);
                    return 3;
                }
        }
    }

    // MULTIPLY TWO ARRAYS ELEMENT BY ELEMENT
    for(int i=0; i<arrLen; i++){
        printf("%d", (argv[1][i]-'0') * (argv[2][i]-'0'));
    }

    return 0;
}
