#include <stdio.h>

int main(){
    char s[] = "Hello";
    char xs[5];
    int i=0;

        while (s[i]!='\0'){
                if (s[i]=='l'){
                    xs[i]='x';
                }
                else{ xs[i]=s[i];
                }
            i++;
            }

    printf("%s\n", xs);   

    return 0;
}