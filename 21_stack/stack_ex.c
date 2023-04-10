#include <stdio.h> 

#define MAX_SIZE 10 

int stack[MAX_SIZE]; 
int top = -1; 

void push(int x) 
{ 
    if (top == MAX_SIZE - 1) 
    { 
        printf("\n STACK overflow..."); 
        return; 
    } 
    printf("\n [%d] is added into stack.", x); 
    stack[++top] = x;             // increase top and adding new element 
} 
 
int pop() 
{ 
    if (top == -1) 
    { 
        printf("\n Stack is empty. Can not pop."); 
        return -1; 
    } 
    printf("\n [%d] is popped out from stack.", stack[top]); 
    return stack[top--];          // return top element and decrease 
} 

int isEmpty() 
{ 
    if(top == -1) printf("\n Stack is empty."); 
    return top == -1;             // return 1 if stack is empty. 0 otherwise 
} 

int isFull() 
{ 
    if(top == MAX_SIZE - 1) printf("\n Stack is full."); 
    return top == MAX_SIZE - 1;   // return 1 if stack is full, 0 for otherwise  
} 

int main() 
{ 
    printf("\n----------------------------------------------------"); 
    isEmpty(); 
    isFull(); 
    printf("\n----------------------------------------------------"); 
    push(1); 
    push(2); 
    push(3); 
    push(4); 
    push(5); 
    push(6); 
    push(7); 
    push(8); 
    push(9); 
    push(10); 
    push(11); 
    push(12);
    push(13); 
    printf("\n----------------------------------------------------"); 
    while(!isEmpty()) 
    { 
        pop(); 
    } 
    printf("\n----------------------------------------------------"); 
    printf("\n@frk: PASS TEST.\n");     
    return 0; 
} 