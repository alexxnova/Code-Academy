/*
Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.
*/

#include <stdio.h>
#include <string.h>

void substringReplace( char * source, char * substring, char * replace);

int main(){

    char str[100]= "I am a poor programmer"; // Declare more chars then needed, we can have extra for longer words to replase
    char substring[]= "poor";
    char replace[]= "great ";

    substringReplace( str, substring, replace);

return 0;
}

void substringReplace( char * source, char * substring, char * replace) {
    // Check where in the string is the substring
    char * subInSource = strstr(source, substring);  // finds string in another string
    
    // function to move memory in the same string (strcpy posible segmentation fault)
    memmove(subInSource+strlen(replace),   //first param points where we want to copy the         
     subInSource + strlen(replace),        // second param pointer to the replase data
     strlen(subInSource)-strlen(replace)+1); //Number to copy = diff in size of substring and replase, +1 for the '\0'

    //Copy the replse string to the string
    memcpy(subInSource, replace, strlen(replace));

    printf("%s\n", source);
}

