/*
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.
*/

#include <stdio.h>
#include <string.h>

void sort(int n, char * ptr);
int our_strcmp(char *s, char *t);

int main(void){
    char word1[] = "listen";
    char word2[] = "silent";
    
    char * p1= word1;
    char * p2= word2;

    int word1Len = strlen(word1) ;
    int word2Len = strlen(word2) ;
    
    if (word1Len != word2Len){
        printf("NOT anagrams \n");
    }
    // sort both words
    sort(word1Len, p1);
    sort(word2Len, p2);
    //compare them
    int ans = our_strcmp(p1, p2);

    if (ans == 0){
        printf("Anagrams! \n");
    }
    else{
        printf("NOT anagrams \n");
    }



    return 0;
}



int our_strcmp(char *s, char *t){
    while (*s == *t && *s != '\0') {
        s++;
        t++;
  }

return (int)(unsigned char)*s - (int)(unsigned char)*t;
}

void sort(int n, char * ptr){ 
    int i, j;
    char t; 
    // Sort the numbers using pointers 
    for (i = 0; i < n; i++) { 
        for (j = i+1; j < n; j++) { 
            if (*(ptr+j) < *(ptr+i)) { 
                t= *(ptr+i); 
                *(ptr+i)= *(ptr+j); 
                *(ptr+j)= t; 
            } 
        } 
    } 
} 
