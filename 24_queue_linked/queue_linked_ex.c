#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

typedef struct queue
{
    node* front;
    node* rear;
} queue;

void init(queue* q) 
{
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(queue* q) 
{
    if (q->front == NULL) 
    {
        printf("\n Queue is empty.");
        return 1;
    }
    return 0;
}

void enqueue(queue* q, int value) 
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    if (isEmpty(q)) 
    {
        q->front = newNode;
        q->rear = newNode;
    } else 
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("\n Insert %d into Queue.", value);
}

int dequeue(queue* q) 
{
    if (isEmpty(q)) 
    {
        printf("\n Can not dequeue since empty.");
        return -1;
    }
    node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) 
    {
        q->rear = NULL;
    }
    free(temp);
    printf("\n Got %d from Queue.", value);
    return value;
}

void display(queue* q) 
{
    if (isEmpty(q)) 
    {
        return;
    }
    printf("\n Queue: ");
    node* current = q->front;
    while (current != NULL) 
    {
        printf(" %d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() 
{
    queue q;
    init(&q);
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
    display(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);
    return 0;
}
