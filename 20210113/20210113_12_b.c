#include <stdio.h>
int printPattern2(int rows);

int main(){
   int n=5;
   printPattern2(n); 
   return 0; 
   } 

int printPattern2(int rows){
   int rowNum = 1;
   int spacesNum = rowNum-1;
   int hashtagNum = (rows-rowNum)*2+1;
    printf("%*s", spacesNum,"");
    printf("%.*s\n", hashtagNum, "##########");
   
   rowNum += 1;
   spacesNum = rowNum-1;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rowNum-1;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rowNum-1;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rowNum-1;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

    return 0;
 }
