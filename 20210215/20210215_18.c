/*
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4
*/

#include <stdio.h>
#include <string.h>
char * copyString(char * str, char *str2);

int main(){
    char string1[]= "A string to be copied.";
    char string3[]= "I am very good in strings coping!";
    char string2[]="";
    char string4[]="";

    printf("%s ", copyString(string1, string4));

    printf("\n");
return 0;
}

char * copyString(char * str, char *str2){
    char * start = str;

    memset(str2, '1', sizeof(str));

    char * strEnd = &str[strlen(str)]; // pointer to the last element in source string
    char * str2End = &str2[strlen(str)]; // pointer to the last element that we need to be filled

    
    while(strEnd>=start){           // until source pointed decrements to the adress of the first element
        *str2End-- = *strEnd--;     //copy values and decrement pointers
    }
    return str2;
}
