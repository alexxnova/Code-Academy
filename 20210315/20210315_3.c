
/* Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

#include "tree.h"
#define COL 13
#define ROW 5

treeNode_t *root = NULL, *z;

int main(void){

    int arr[ROW][COL]={{7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13},
                        {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65},
                        {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81},
                        {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4},
                        {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14}};

    for(int i=0;i<ROW;i++){
        printf("\n\n");
        for(int j=0;j<COL;j++){
            insert(arr[i][j]);
        }
        preorder();
    }
return 0;
}