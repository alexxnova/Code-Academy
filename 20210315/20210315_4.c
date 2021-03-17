/*Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на  6, 5, 10, 8, 13, 3, 1, 7, 11, 12, 14*/
#include "tree.h"

treeNode_t *root = NULL;

int main()
{
    int arr[11] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    for (int i = 0; i < 11; i++){
        insert(arr[i]);
    }
    preorder(root);
    printf("\n");

    int toDel[4] = {1, 7, 12, 14};
    for (int i = 0; i < 4; i++){
        deleteElement(root,toDel[i]);
    }

    preorder(root);
    printf("\n");

   return 0;
}