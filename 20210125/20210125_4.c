/* Check for double spaces and replace them with a single space
*/

#include <stdio.h>
int main(void){
    int in, valid=1; 
    while((in= getchar()) != EOF){
        if ((in ==' ')){
            if (valid == 1 && in==' '){
                continue;
            }
            valid=1;
        }
        else{
            valid=0;
        }
        putchar(in);
    }   
    return 0;
}
