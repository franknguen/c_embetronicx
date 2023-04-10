#include <stdio.h> 

#define MAX_SIZE 10 

typedef struct queue
{ 
    int front; 
    int rear; 
    int items[MAX_SIZE]; 
} queue; 

void init(queue *q) 
{ 
    q->rear  = -1; 
    q->front = -1; 
} 

int isEmpty(queue *q) 
{ 
    if (q->front == -1) 
        printf("\n Queue is empty."); 
    return q->front == -1; 
} 

int isFull(queue *q) 
{ 
    if (q->rear == MAX_SIZE - 1)  
        printf("\n Queue is full."); 
    return q->rear == MAX_SIZE - 1; 
} 

void enqueue(queue *q, int value) 
{ 
    if(isFull(q)) 
    { 
        printf("\n Queue overflow."); 
        return; 
    } 
    if(isEmpty(q)) 
    { 
        q->front = 0; 
    } 
    q->rear++; 
    printf("\n Insert %d into Queue.", value); 
    q->items[q->rear] = value; 
} 

int dequeue(queue *q) 
{ 
    int value; 
    if (isEmpty(q))  
    { 
        printf("\n Can not dequeue since empty."); 
        return -1; 
    } 
    value = q->items[q->front]; 
    printf("\n Got %d from Queue.", value); 
    if(q->front == q->rear) 
    { 
        q->front = -1; 
        q->rear  = -1; 
    } else 
    { 
        q->front++; 
    } 
    return value; 
} 

void display(queue *q) 
{ 
    if(isEmpty(q)) 
    { 
        printf("\n Queue is empty."); 
        return; 
    } 
    printf("\n Queue: "); 
    for(int i = q->front; i < q->rear; i++) 
    { 
        printf(" %d ", q->items[i]); 
    } 
    printf("\n"); 
} 

int main() 
{ 
    queue q; 
    init(&q); 
    printf("\n----------------------------------------------------"); 
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 7);
    enqueue(&q, 8);
    enqueue(&q, 9);
    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    printf("\n----------------------------------------------------");     
    display(&q); 
    printf("Dequeued: %d\n", dequeue(&q)); 
    printf("Dequeued: %d\n", dequeue(&q)); 
    display(&q); 
    printf("\n----------------------------------------------------"); 
    printf("\n@frk: PASS TEST.\n");
    return 0; 
}
