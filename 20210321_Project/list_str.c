#include "list_str.h"

void init(){
    head = NULL;
};

int add(char * str){
    node_t * p = head; // preserve the head pointer
    head = (node_t*)malloc(sizeof(node_t));
        if (!head) return -1;
    strcpy(head->str,str);
    head->next = p; // allocate the start at new address with malloc
    return 0;
}

// !!! There hsould be atleast one node precent in the list
int addEnd(char * str){
    if(head == NULL){
        printf("There hsould be atleast one node precent in the list\n");
        return 1;
    }
    else{
        node_t *p = head;
        node_t *q = (node_t *)malloc(sizeof(node_t)); // new element
            if(!q)return -1;
        while(p->next != NULL) // search fot the element with pointer to NULL 
            p = p->next;
        p->next = q; // the old last pointer points to the new last element
        strcpy(q->str,str);
        q->next = NULL; // the new last elelemnt pointer is set to NULL
        return 0;
    }
}

void deleteNode(char * key){
    node_t * temp = head; // Save head node
    node_t * prev;
    // Key is in the head node
    if (temp != NULL && temp->str == key) {
        head = temp->next; // Changed head
        free(temp); // free old head
        return;
    }
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->str != key) {
        prev = temp;
        temp = temp->next;
    }
    // If key was not present in linked list
    if (temp == NULL)
        return; 
    prev->next = temp->next; // Unlink the node from linked list
    free(temp); // Free memory
}

int dellHead(){
    node_t *p = head; 
    if(head != NULL){  // checks is there alocated memory for the start pointer
        head = head->next; // move the start pointer to the next element
        free(p); // remove the pointer of the original first eleemt
        return 0;
    }else return 1;
    //Spisaka e prazen
}

int printList(){
    if(head == NULL){
        return 1;
    }else{
        node_t * p = head;
        while(p != NULL){
            printf("%s\n", p->str);
            p = p->next;
        }
    }
}

int listLen(node_t * head){
        node_t * p = head;
        int count=0;
        while(p != NULL){
            count++;
            p = p->next;
        }
        return count;
}

node_t * removeDuplicates(node_t * head){
    node_t * pCurr = head;
    node_t * temp;
    while (pCurr->next != NULL ){
        node_t * pNext = pCurr;
        while(pNext->next != NULL){
            if(!strcmp(pCurr->str,pNext->next->str)){
                temp = pNext->next->next;
                pNext->next= pNext->next->next;
                temp=NULL;
                free(temp);                
            } else pNext = pNext->next;
        }
        pCurr = pCurr->next;
    return head;
    }
}

int oneInstanceElement(node_t * head){
    if(head == NULL){
        return 1;
    }else{
        int flag=0;
        node_t * temp;
        node_t * pCurr = head;
        node_t * pNext;

        while (pCurr != NULL && pCurr->next != NULL){
            flag=0;
            pNext = pCurr;
            while(pNext->next != NULL){
                if(!strcmp(pCurr->str,pNext->next->str)){
                    temp = pNext->next;
                    pNext->next= pNext->next->next;
                    temp=NULL;
                    free(temp);
                    flag=1;
                } else pNext = pNext->next;
            }
            if (flag){
                deleteNode(pCurr->str);
            }
            pCurr = pCurr->next;
        }
        return 0;
    }
}

int freeList(node_t * head){
    if(head == NULL){
        return 1;
    }else{
        node_t * tmp;
        while (head != NULL){
            tmp = head;
            head = head->next;
            free(tmp);
            }
        return 0;
    }
}






