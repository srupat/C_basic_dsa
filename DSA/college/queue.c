#include<stdlib.h>
#include<stdio.h>

struct queue{
    int size;
    int rear;
    int front;
    int * arr;
};

int isFull(struct queue * q)
{
    if(q->front == q->size-1)
    {
        return 1;
    }
    else return 0;
}

int isEmpty(struct queue * q)
{
    if(q->front == q->rear)
    {
        return 1;
    }
    else return 0;
}
void enqueue(struct queue * q,int value)
{
    if (isFull(q)){
        printf("Cannot enqueue, queue is full\n");
    }
    else{
        q->rear++;
        q->arr[q->rear]=value;
    }
}
int dequeue(struct queue * q)
{
    int a=-1;
    if (isEmpty(q))
    {
        printf("Cannot dequeue, queue is empty\n");
    }
    else{
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}
void display(struct queue * q)
{
    if (isEmpty(q))
    {
        printf("queue is empty\n");
    }
    else if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else{
    for(int i=q->front+1;i<q->rear+1;i++)
    {
        printf("%d\n",q->arr[i]);
    }
    }
}
int main()
{
    int ch,val;
    struct queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // enqueue(&q,15);
    // enqueue(&q,30);
    // enqueue(&q,45);
    // printf("dequeuing element %d\n",dequeue(&q));  
    // display(&q);
    while(1)
    {
    printf("Enter 1 to enqueue\n2 to dequeue\n3 to display\n4 to exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 : 
        printf("Enter value to be enqueued\n");
        scanf("%d",&val);
        enqueue(&q,val);
        break;
    case 2:
        dequeue(&q);
        break;
    case 3:
        printf("the queue is \n");
        display(&q);
        break;
    case 4:
        exit(1);
    default:
        printf("invalid\n");
        break;
    }
    }    
    return 0;
}
