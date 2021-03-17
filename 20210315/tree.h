#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

treeNode_t *insert(int d);
void insert_rec(int x, treeNode_t **t);
treeNode_t *search(int d);
void preorder(treeNode_t *n);
int add(int n, treeNode_t *t);
treeNode_t *search_iter(treeNode_t *t, int k);
treeNode_t *search_rec(treeNode_t *t, int n);
void printCurr(treeNode_t *curr);
void printRight(treeNode_t *t);
int del(int n);
void deltree(treeNode_t * tree);
treeNode_t * findMin(treeNode_t * root);
treeNode_t * findMax(treeNode_t * root);
treeNode_t * deleteElement(treeNode_t *root, int data);