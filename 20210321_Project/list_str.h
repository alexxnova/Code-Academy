#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct node_t node_t;

typedef struct node_t{
    char str[MAX];
    node_t * next;
}node_t;

extern node_t * head;

void init();
int add(char * str);
int addEnd(char * str);
void deleteNode(char * str);
int dellHead();
int printList();
int listLen(node_t * head);
node_t * removeDuplicates(node_t * head);
int oneInstanceElement(node_t * head);
int freeList(node_t * head);