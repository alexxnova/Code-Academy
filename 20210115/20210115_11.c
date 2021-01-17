#include <stdio.h>
#include <string.h>


int main(){
    char s[] = "Hello";
    char rts[5];
    int i=0;
    int j=0;

    while(s[i]!='\0')
        {
            i++;
        }   
    
    i = i -1;   
    printf("%d\n", i);
    printf("%d\n", j);

    while(i>=0)
        {
            rts[j]=s[i];
            i--;
            printf("%d\n", i);
            j++;
            printf("%d\n", j);
        }

    printf("%s\n", rts);


    return 0;
}