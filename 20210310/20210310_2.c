
/*
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

#define MAXSIZE 1000

typedef struct {
        char log[3][2][MAXSIZE]; // 3 tables for type 0 ={}, type 1=(), type 2=[], that store the bracket character on the first row and its corresponding line on the second row
        int top[3]; 
}t_stack;

int parenthesisBalanced(FILE * fp, t_stack * stack);

int isempty(t_stack * logPtr, int type);
int isfull(t_stack * logPtr, int type);
void push(t_stack * stack, char data, int lineNum,  int type);
void pop(t_stack * logPtr, int type);

int main(int argc, char* argv[]){
    // set up the stack
    t_stack * parenthesis  = (t_stack *)malloc(sizeof(t_stack *));
    if (!parenthesis){
            perror("");
            exit(EXIT_FAILURE);
    }
    parenthesis->top[0]=-1;
    parenthesis->top[1]=-1;
    parenthesis->top[2]=-1;

    //File to be checked
    FILE * fp = NULL;
    fp = fopen("zad2_check.c", "r");
    if (!fp){
            perror("");
            exit(EXIT_FAILURE);
    }

    parenthesisBalanced(fp, parenthesis);

    return 0;
}

void parenthesisBalanced(FILE * fp, t_stack * stack){
    int countLine=1;
    char c;
    while((c=getc(fp))!=EOF){
        if(c=='{'){
            push(stack,c,countLine,0);
        }
        else if(c=='['){
            push(stack,c,countLine,1);
        }
        else if(c=='('){
            push(stack,c,countLine,2);
        }
        else if(c=='}'){
                pop(stack,0);
        }
        else if(c==']'){
                pop(stack,1);
        }
        else if(c==')'){
                pop(stack,2);
        }
        if (c=='\n'){
            countLine++;
        }
    }

    if(!isempty(stack,0)){
        printf("Missing '%c' ",stack->log[0][0][stack->top[0]] + 2); // print first row which stores the char of type 0 ='{'
        printf("at line %d\n",stack->log[0][1][stack->top[0]]); // print second row for the line number of type 0 = '{'
    }
    else if(!isempty(stack,1)){
        printf("Missing '%c' ",stack->log[1][0][stack->top[1]] + 2); // print first row which stores the char of type 1 = '['
        printf("at line %d\n",stack->log[1][1][stack->top[1]]); // print second row for the line number of type 1 ='['
    }else if(!isempty(stack,2)){
        printf("Missing '%c' ",stack->log[2][0][stack->top[2]] + 1); // print first row which stores the char of type 2 = '('
        printf("at line %d\n",stack->log[2][1][stack->top[2]]); // print second row for the line number of type 2 = '('
    } else printf("The paranthesis are balanced");
 
}

int isempty(t_stack * stack, int type){
    if (stack->top[type] == -1)
        return 1;
    else
        return 0;
}

int isfull(t_stack * stack, int type){
    if (stack->top[type] == MAXSIZE)
        return 1;
    else
        return 0;
}

void push(t_stack * stack, char data, int lineNum,  int type){
    if (!isfull(stack, type)){
        stack->top[type]++;
            stack->log[type][0][stack->top[type]]=data;
            stack->log[type][1][stack->top[type]]=lineNum;
    }
    else{
        printf("Stack if full.\n");
    }
}

void pop(t_stack * stack, int type){
    if (!isempty(stack, type)){
        // stack->log[type][0][stack->top[type]]=0;
        // stack->log[type][1][stack->top[type]]=0;         
        stack->top[type]--;
    }
    else{
        printf("Stack is empty.\n");
    }
    
}
