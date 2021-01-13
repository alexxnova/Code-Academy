#include <stdio.h>
int printPattern1(int rows);

int main(){
   int n=5;
   printPattern1(n); 
   return 0; 
   } 

int PrintPattern1(int rows){
   int rowNum = 1;
   int spacesNum = rows - rowNum;
   int hashtagNum = (2*rowNum)-1;
    printf("%*s", spacesNum,"");
    printf("%.*s\n", hashtagNum, "##########");
   
   rowNum += 1;
   spacesNum = rows - rowNum;
   hashtagNum = (2*rowNum)-1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rows - rowNum;
   hashtagNum = (2*rowNum)-1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rows - rowNum;
   hashtagNum = (2*rowNum)-1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rows - rowNum;
   hashtagNum = (2*rowNum)-1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

    return 0;
 }
