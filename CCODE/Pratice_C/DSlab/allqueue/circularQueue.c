#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int Q[N];
void enqueue()
{
    int n;
    if(rear==-1 && front==-1)
    {
        printf("Enter the number to be entered in queue:\n");
        scanf("%d",&n);
        front=rear=0;
        Q[rear]=n;
        printf("Enqueued Element is %d\n",Q[rear]);
    }
    else if((rear+1)%N==front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter the number to be entered in queue:\n"); // Prompting for input
        scanf("%d",&n);
        rear=(rear+1)%N;
        Q[rear]=n;
        printf("Enqueued Element is %d\n",Q[rear]); // Confirmation of enqueued element
    }
}

void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue Underflow\n");
    }
    else if(rear==front)
    {
        printf("Dequeued Element is %d\n",Q[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued Element is %d\n",Q[front]);
        front=(front+1)%N;
        
    }
}
void display()
{
    int i=front;
    if(rear==-1 && front==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(i!=rear)
        {
            printf("Queue Element [%d] is %d\n",i,Q[i]);
            i=(i+1)%5;
        }
        printf("Queue Element rear is %d\n",Q[rear]);
    }
}
void peek()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Front Element is %d\n",Q[front]);
    }
}

int main()
{
    int choice;
    while (1) {
        printf("\nEnter Choice: ");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Peek");
        printf("\n5. Exiting the Loop\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
            break;
            case 2:
                dequeue();
            break;
            case 3:
                display();
            break;
            case 4:
                peek();
            break;
            case 5:
                printf("Exiting the loop...\n");
                exit(0);
            break;
            default:
                printf("Invalid Input!!!\n");
            break;
        }
    }
    return 0;
}