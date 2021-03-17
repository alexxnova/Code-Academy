#include "tree.h"
#include <Windows.h>


treeNode_t * insert(int d){
    treeNode_t *tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
    treeNode_t *current= NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if(NULL == root){
        root = tmp;
    }else{
        current = root;
        while(1){
            parent = current;
            if(d < parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = tmp;
                    return tmp;
                }
            }else{
                current = current->right;
                if(current == NULL){
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}

// Рекурсивно построяване на дърво
void insert_rec(int x, treeNode_t **t){
    treeNode_t *tmp = NULL;
    if (!(*t))
    {
        tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
        tmp->left = tmp->right = NULL;
        tmp->data = x;
        *t = tmp;
        return;
    }
    if (x < (*t)->data)
    {
        insertKey(x, &(*t)->left);
    }
    else if (x > (*t)->data)
    {
        insertKey(x, &(*t)->right);
    }
}

treeNode_t *search(int d){
    treeNode_t *current = root;
    //printf("Visiting elements: ");
    while (current->data != d){
        if(current != NULL)
            //printf("%d ", current->data);
        if(current->data > d)
            current = current->left;
        else
            current = current->right;
        if(current == NULL)
            return NULL;
    }
    return current;
}
void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
int add(int n, treeNode_t *t){
    if(NULL == t){
        t = (treeNode_t*)malloc(sizeof(treeNode_t));
        t->data = n;
        t->left = t->right = NULL;
    }else if(t->data > n){
            add(n,t->right);
        }else if(t->data < n){
            add(n, t->left);
        }else
            fprintf(stderr, "Element exists\n");
}
treeNode_t *search_iter(treeNode_t *t, int n){
    while ((t != NULL)&&(t->data != n)){
        if(t->data < n)
            t = t->right;
        else
            t = t->left;
    }
    return t;
}
treeNode_t *search_rec(treeNode_t *t, int n){
    if(t != NULL)
        if(t->data < n)
            t = search_rec(t->right, n);
        else if(t->data > n)
            t = search_rec(t->left, n);
    return t;
}

void printCurr(treeNode_t *curr){
    treeNode_t *p = curr;
    printf("curr - %d", p->data);
}
void printRight(treeNode_t *t){
    treeNode_t *p = t;
    while(p != NULL){
        printf("%d\t", p->data);
        p = p->right;
    }
}

int del(int n){
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if(current->right == NULL && current->left != NULL){
        
        printf("\ndel =%d\n", current->left->data);
        current = current->left;
        Sleep(100000);
        free(current);
        parent->left = NULL;
    }else if(current->right != NULL  && current->left == NULL){
        printf("\ndel =%d\n", current->right->data);
        current = current->right;
        free(current);
        parent->right = NULL;
    }
    return 0;
}

void deltree(treeNode_t * tree){
 if(tree) {
    deltree(tree->left);
    deltree(tree->right);
    free(tree);
   }
}

treeNode_t * findMin(treeNode_t * root){
	while(root->left != NULL) 
        root = root->left;
	return root;
}

treeNode_t * findMax(treeNode_t * root){
	while(root->right != NULL) 
        root = root->right;
	return root;
}

treeNode_t * deleteElement(treeNode_t *root, int data){
	if(root == NULL) 
        return root; 
	else if(data < root->data) 
        root->left = deleteElement(root->left,data);
	else if (data > root->data) 
        root->right = deleteElement(root->right,data);
	// the element is now found 
	else {
		// if there is no child
		if(root->left == NULL && root->right == NULL) { 
			free(root);
			root = NULL;
		}
		// if there is ONE child
		else if(root->left == NULL) {
			treeNode_t * temp = root;
			root = root->right;
			free(root);
		}
		else if(root->right == NULL) {
			treeNode_t * temp = root;
			root = root->left;
			free(root);
		}
		// if there are TWO childs
		else { 
			treeNode_t * temp = findMin(root->right);
			root->data = temp->data;
			root->right = deleteElement(root->right,temp->data);
		}
	}
	return root;
}