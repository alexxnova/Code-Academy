#include <stdio.h>

int printPattern1(int rows);
int printPattern2(int rows);

int main(){
   int n=5;
   printPattern1(n);
   n-=1;
   printPattern2(n);
   return 0; 
   } 

int printPattern1(int rows){
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
int printPattern2(int rows){
   int rowNum = 1;
   int spacesNum = rowNum-2;
   int hashtagNum = (rows-rowNum)*2+1;
    printf("%*s", spacesNum,"");
    printf("%.*s\n", hashtagNum, "##########");
   
   rowNum += 1;
   spacesNum = rowNum;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rowNum;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

   rowNum += 1;
   spacesNum = rowNum;
   hashtagNum = (rows-rowNum)*2+1;
   printf("%*s", spacesNum,"");
   printf("%.*s\n", hashtagNum, "##########");

    return 0;
 }
