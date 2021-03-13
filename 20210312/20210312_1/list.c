#include "list.h"

extern node_t * head; 

void init(){
    head = NULL;
};


int add(int n){
    node_t * p = head; // preserve the head pointer
    head = (node_t*)malloc(sizeof(node_t));
    if (!head) return -1;
    head->data = n; // assign data to list structure
    head->next = p; // allocate the start at new address with malloc
    return 0;
}

int addAfter(int n, int k){//n – е добавената стойност
    node_t *q;
    node_t *p = head; // moving *p, not head pointer
    while(p->data != k) // check the elements
        p = p->next;
    q = (node_t *)malloc(sizeof(node_t)); // alocate memory with new pointer when the element was found
    if(!q) return -1;
    q->data = n;        // swap the data to the new pointer
    q->next = p->next;  // pointer of the new struct points to the next element
    p->next = q;        // pointer of the previuous element points to the new struct
return 0;
}

int addPrev(int n, int k){
    node_t *q;
    node_t *p = head;  // preserve the start pointer
    while(p->data != k)
        p = p->next;
    q = (node_t *)malloc(sizeof(node_t));
    if(!q) return -1;
    q->next = p->next; 
    q->data = p->data;
    p->next = q;
    p->data = n;
return 0;
}

int addEnd(int n){
    node_t *p = head;
    node_t *q = (node_t *)malloc(sizeof(node_t)); // new element
    if(!q)return -1;
    while(p->next != NULL) // search fot the element with pointer to NULL 
        p = p->next;
    p->next = q; // the old last pointer points to the new last element
    q->data = n; // value to the new element
    q->next = NULL; // the new last elelemnt pointer is set to NULL
return 0;
}

int dellFirst(int *n){
    node_t *p = head; 
    if(head != NULL){  // checks is there alocated memory for the start pointer
        *n = head->data; // save the value of the node 
        head = head->next; // move the start pointer to the next element
        free(p); // remove the pointer of the original first eleemt
        return 0;
    }else return 1;
    //Spisaka e prazen
}

node_t* dellElemReturnAfter(int *n, int k){//Изтриване на елемент със стойност k
    node_t *p = head; //и връщане на елемента преди него
    node_t *q;
    while(p->data != k){ // searching for the node
        if(p->next == NULL){ // end of list, didn't found the element
            printf("\ndellElemReturnAfter(int *n, int k): Element not found.");
            exit(1);
        }else{
        q = p;  // save the values of the *p element
        p = p->next; // assing pointer 
        }
    }
    *n = p->data;   
    q->next = p->next; // assings the adress for the next element
    free(p);
    return q->next;
}

void dellEnd(int *n){
    node_t *q;
    node_t *p = head;
    while(p->next != NULL){
        q = p;
        p = p->next;
    }
    *n = p->data;
    q->next = NULL;
    free(p);
}

void printList(){
    node_t * p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

void printAfter(node_t *curr){
    node_t *p = curr;
    while(p != NULL){
        printf("%d, ", p->data);
        p = p->next;
    }
}

node_t * search_iter(int k){
    node_t * p = head;
    while(p->data != k){
        if(p->next == NULL){
            exit(1);
        }else p = p->next;
    }
    return p;
}

int isEmptyList(){
    if(head == NULL){
        return 0;
    }else return -1;
}






