#include<stdio.h>
#include<stdlib.h>
#define N 2
int front=-1,rear=-1;
int Q[N];
void enqueue(int n)
{
    if(rear==-1 && front==-1)
    {
        front=rear=0;
        Q[rear]=n;
        printf("Enqueued: %d at %d.\n",Q[rear], rear);
        printf("%d, %d", ((rear+1)%N), front);
    }
    else if((rear+1)%N==front)
    {
        printf("Queue Overflow.\n");
    }
    else
    {
        rear=(rear+1)%N;
        Q[rear]=n;
        printf("Enqueued: %d at %d.\n",Q[rear], rear);
        printf("%d, %d", ((rear+1)%N), front);
    }
    printf("\n");
}

void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue Underflow.\n");
    }
    else if(rear==front)
    {
        printf("Dequeued: %d at %d.\n",Q[front], front);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued: %d at %d.\n",Q[front], front);
        front=(front+1)%N;
    }
    printf("\n");
}
void display()
{
    int i=front;
    if(rear==-1 && front==-1)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        while(i!=rear)
        {
            printf("Queue Element [%d] is %d.\n",i,Q[i]);
            i=(i+1)%N;
        }
        printf("Queue Element rear is %d.\n",Q[rear]);
    }
    printf("\n");
}
void peek()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Front Element is %d.\n",Q[front]);
    }
    printf("\n");
}

int main()
{
    enqueue(69);
    enqueue(70);
    dequeue();
    enqueue(71);
    display();

    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}