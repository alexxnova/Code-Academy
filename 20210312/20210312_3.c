/* Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t * next;
};

node_t * add(node_t * head,int n);
void printList();
void findNodeFromEnd (node_t * head, int n);

int main(void){

    node_t * head = NULL;

    for (int i=1; i<=14;i++){
        head = add(head, i);
    }
    printList(head);

    findNodeFromEnd (head,5);

    return 0;
}

node_t * add(node_t * head, int n){
    node_t * p = (node_t*)malloc(sizeof(node_t));
    p->data = n;
    p->next = head;
    head = p;
    return head;
}

void printList(node_t * head){
    node_t * p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

void findNodeFromEnd (node_t * head, int n){
    // two pinters to the head of the list
    node_t * p1 = head;
    node_t * p2 = head;

    int counter = 1;
    // move the second pointer to position n-1
    while(counter <= n-1){
        p2 = p2->next;
        counter++;
    }
    // move both pointers forward until p2 reaches the end of the list
    while (p2->next != NULL){
        p1=p1->next;
        p2=p2->next;
    }
    // the difference in the positions of the two pointers will give us the n-th elelemnt
    printf("\n%d ", p1->data);
}

