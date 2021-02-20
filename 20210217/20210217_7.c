/*
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countLetters( char *str);

int main(){

    char str[]= "This is a string to test my idea for search in a char and count it";
    countLetters(str);

return 0;
}


void countLetters( char * str){
    char *ps = str;

    int letterCount[26] = {0};
    static char alphabeth [] = "abcdefghijklmnopqrstuvwxyz";

    while ( *ps ){
        int letter = tolower(*ps);          // to lower case
        if (letter >=97 && *ps <=122){    // check is it in the lower case letter range in the ASCII
            int i;
            for(i=0; alphabeth[i]!='\0'; i++){
                if ((int)alphabeth[i]==letter){     //get the index of the letter in the alphabeth
                       letterCount[i]+=1;       //increment the same index in the position array
                }            
            }   
        }
        *ps++;      // go to next letter in the string
    }
    
    for (int i=0; i<26; i++ ){
        printf("Letter %c found %d times.\n", alphabeth[i], letterCount[i]); 
        }
    return;
}


