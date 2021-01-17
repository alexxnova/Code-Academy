#include <stdio.h>
#include <string.h>


int main(){
    char s[ ] = "Hi";
    //char s = {'H', 'i', '\0'};
    int i=0;
    while(s[i]!='\0')
        {
            printf("%c\n", s[i]);
            i++;
        }
    printf("Charecter count: %d\n", i);
    return 0;
} 