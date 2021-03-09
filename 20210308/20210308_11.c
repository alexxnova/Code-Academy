
/*
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.
*/

#include <stdio.h>

int main(){
    fpos_t pos;
    FILE *fp=NULL;
    fp = fopen("myfile_copy.txt", "a");
    if(fp==NULL){
        perror ("Error opening file");
    return(-1);
    }
    
    char str[]="append\n";
    fputs(str,fp);

    printf("fgetpos() returns: %d\n", fgetpos(fp, &pos));
    printf("Pos: %d\n", pos);

    fclose(fp);
    fp=NULL;
    
 return 0;
}
