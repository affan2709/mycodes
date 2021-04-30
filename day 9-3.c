#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;int rear;int front;int *Q;
};
void Create(struct Queue *q)
{
    printf("Enter the size of the Queue\n");
    scanf("%d",&q->size);
    q->rear=q->front=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void Enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
        printf("Queue overflow\n");
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
void Dequeue(struct Queue *q)
{
    int x=-1;
    if(q->rear==q->front)
        {printf("Queue Underflow\n");}
    else
    {
        q->front++;
        x=q->Q[q->front];
        printf("Removed element is %d\n",x);
    }
}
void Display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d\t",q.Q[i]);
    }
    printf("\n");
}
int main()
{
    struct Queue q;
    int ch,x;
    Create(&q);
    for(;;)
    {
        printf("1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element\n");
                   scanf("%d",&x);
                   Enqueue(&q,x);
                   break;
            case 2:Dequeue(&q);
                   break;
            case 3:Display(q);
                   break;
            default:exit(0);
        }
    }
}
