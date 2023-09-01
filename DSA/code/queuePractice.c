#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct queue * q)
{
    if(((q->r)+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue * q)
{
    if(q->f == q->r) return 1;
    return 0;
}
int dequeue(struct queue * q)
{
    int a = -1;
    if(isEmpty(q)) return 0;
    else{
        q->f = ((q->f)+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}
void enqueue(struct queue * q, int val)
{
    if(isFull(q)) return;
    else{
        q->r = ((q->r)+1)%q->size;
        q->arr[q->r] = val;
    }
}
int main()
{
struct queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size*sizeof(int));
    
    // enqueue few elements
    enqueue(&q, 12);
    enqueue(&q , 15);
    enqueue(&q, 1);
    printf("dequeueing element %d\n",dequeue(&q));
    printf("dequeueing element %d\n",dequeue(&q));
    printf("dequeueing element %d\n",dequeue(&q));
    enqueue(&q,45);
    enqueue(&q,45);
    enqueue(&q,45);
    if (isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if (isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}