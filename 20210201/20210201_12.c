/*
напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)

*/

#include <stdio.h>
#include <string.h>

//char reverse(char *s);
int any(char s1[], char s2[]);

int main(void){
    char str1[] = "ab1D";
    char str2[]="ghD3";
    

    printf("%d",any(str1,str2));
    
    return 0;
}

int any(char s1[], char s2[]){
    int i=0,j;
    int flag=1;
    while(s1[i]!='\0'&& (flag)){
        for(j=0;s2[j]!='\0'&& (s1[i]!=s2[j]);++j);
            if(s2[j]=='\0') {
                flag=1;
                i++;
            }
            else
                flag=0;
    }
    if(s1[i]=='\0')
        return -1;
    else
        return i;
}