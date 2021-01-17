#include <stdio.h>

int main(){

    char str[] = "HELLO";
        for (int i=0; str[i]!='\0';i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i]+=32;
            }

        }
               
    printf("%s\n", str);   

    return 0;
}