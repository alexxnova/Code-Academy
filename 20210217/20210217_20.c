/*
Напишете програма, която да създаде стек (LIFO) от 16 елемента, който
има следното API
int pop()
void push()
int top()
int isFull()
*/

#include <stdio.h>

int MAXSIZE = 16;
int stack[16];
int last = -1;


int isempty(){
    if (last == -1)
        return 1;
    else
        return 0;
}

int pop(){
    int data;
    if (!isempty()){
        data = stack[last];
        last = last - 1;
        return data;
    }
    else{
        printf("Could not retrieve data, Stack is empty.\n");
    }
}
int isfull(){
    if (last == MAXSIZE)
        return 1;
    else
        return 0;
}
void push(int data){
    if (!isfull()){
        last = last + 1;
        stack[last] = data;
    }
    else{
        printf("Could not insert data, Stack is full.\n");
    }
}
int top(){
    return stack[last];
}

int main(){

    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push('c');
    printf("Element at top of the stack: %c\n", top());
    printf("Elements: \n");
    
    
    printf("Stack full: %s\n", isfull() ? "true" : "false");
 

    return 0;
}