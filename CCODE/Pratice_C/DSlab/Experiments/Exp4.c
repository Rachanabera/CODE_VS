#include <stdio.h>
#include <conio.h>
#define N 5

int front = -1, rear = -1;
int Q[N];

void enqueue(int n) {
    if(rear == -1 && front == -1) {
        front = rear = 0;
        Q[rear] = n;
        printf("Enqueued Element is %d.\n",Q[rear]);
    } else if((rear+1)%N == front) {
        printf("Queue Overflow.\n");
    } else {
        rear = (rear+1)%N;
        Q[rear] = n;
        printf("Enqueued Element is %d.\n",Q[rear]);
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue Underflow.\n");
    } else if(front == rear) {
        printf("Dequeued Element is %d.\n",Q[front]);
        front = rear = -1;
    } else {
        printf("Dequeued Element is %d.\n",Q[front]);
        front = (front+1)%N;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty.\n");
    } else {
        int i = front;
        printf("Queue elements are: ");
        while (1) {
            printf("%d ", Q[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % N;
        }
        printf("\n");
    }
}

void peek() {
    if(front == -1 && rear == -1) {
        printf("Queue is Empty.\n");
    } else {
        printf("Front Element is %d.\n",Q[front]);
    }
}

void main() {
    int choice, n;
    while(1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                printf("Enter the number to be entered in queue: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            }
            case 2: {
                dequeue();
                break;      
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                peek();
                break;
            }
            case 5: {
                exit(0);
            }
        }
    }
}