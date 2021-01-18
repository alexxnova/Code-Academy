# include <stdio.h>

int isLetter(char c);

int main(){  
    char c;
    printf("Enter character: ");
    c = getchar();
    isLetter(c);
    return 0;
}

int isLetter(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
    {
        printf("This is a letter.");
    }else {
        printf("This is not a letter.");
    }

}
