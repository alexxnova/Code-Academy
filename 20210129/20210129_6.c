/*
Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.
*/

#include <stdio.h>

void decToBin(int a);

int main(){
    int a=5;
    decToBin(a);
    return 0;
}

void decToBin(int a){
    int b[32];
    int i = 0; 
    // while (a > 0) { 
    //     b[i] = a % 2; 
    //     printf("%d",a % 2);
    //     printf("%d\n",b[i]);
    //     a = a / 2; 
    //     i++;   
    // }  
    for(i=0; a>0; i++){ 
        b[i]= a%2;    
        printf("%d",a%2);
        a=a/2;
         
    }
    printf("%c",b);    
    return;
}