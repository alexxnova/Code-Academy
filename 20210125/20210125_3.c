/*3.Напишете програма, която преброява шпациите, табулациите и
новите редове.*/

#include <stdio.h>
int main(void){
    int c, i=0, j=0, z=0; 
    while((c= getchar()) != EOF){
        if ((c =='\n'))i++;
        else if((c ==' '))j++;
        else if ((c =='\t'))z++;           
    }
    printf("Numer lines: %d\nNumer intervals: %d\nNumer tabs: %d\n", i,j,z);   
    return 0;
}
