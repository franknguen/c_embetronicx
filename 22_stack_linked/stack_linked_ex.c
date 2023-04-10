#include <stdio.h> 
#include <stdlib.h> 

typedef struct node 
{ 
    int data; 
    struct node* next; 
} node; 

struct node* top = NULL; 

void push(int data) 
{ 
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); 
    if (new_node == NULL) 
    { 
        printf("\n Error: Mem allocation failed."); 
        return; 
    } 
    printf("\n [%d] is added into stack.", data); 
    // set data and nxt pointer of new node 
    new_node->data = data; 
    new_node->next = top; 
    //update top of stack to new node 
    top = new_node; 
} 

int pop() 
{ 
    if(top == NULL)  
    { 
        printf("\n Error: stack underflow."); 
        return -1; 
    } 
    int data = top->data; 
    struct node *tem = top; 
    top = top->next; 
    free(tem); 
    printf("\n [%d] is popped out from stack.", data); 
    return data; 
} 

int isEmpty() 
{ 
    if(top == NULL) printf("\n Stack is empty."); 
    return top == NULL;             // return 1 if stack is empty. 0 otherwise 
} 

// int isFull() 
// { 
//     if(top == MAX_SIZE - 1) printf("\n Stack is full."); 
//     return top == MAX_SIZE - 1;   // return 1 if stack is full, 0 for otherwise  
// } 

int main() 
{ 
    printf("\n----------------------------------------------------"); 
    isEmpty(); 
    //isFull(); 
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