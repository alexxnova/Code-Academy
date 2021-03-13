#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t * next;
};
extern node_t * head;

void init();
int add(int n);
int addAfter(int n, int k);
int addPrev(int n, int k);
int addEnd(int n);
int dellFirst(int *n);
node_t* dellElemReturnAfter(int *n, int k);
void dellEnd(int *n);
void printList();
node_t * search_iter(int k);
int isEmptyList();