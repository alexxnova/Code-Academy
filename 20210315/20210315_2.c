
/* Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T)*/

#include "tree.h"
#define SIZE 13

treeNode_t *root = NULL;

int main(void){

    treeNode_t * root = NULL;

    int arr[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    
    for(int i = 0; i < SIZE; i++)
        insert_rec(arr[i], &root);
    
    preorder(root);

return 0;
}
