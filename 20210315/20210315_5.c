/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво. */
#include "tree.h"

treeNode_t *root = NULL;

int main(void)
{

    int arr[11] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    int i;
    for (i = 0; i < 11; i++){
        insert(arr[i]);
    }
    treeNode_t * t = search_rec(root, 13);
    printf("Recursively search tree :%d", t->data);

    return 0;
}