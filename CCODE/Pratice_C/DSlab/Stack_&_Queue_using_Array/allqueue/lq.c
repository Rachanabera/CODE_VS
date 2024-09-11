#include <stdio.h>
#include <stdlib.h>

# define SIZE 2

void enqueue(int n);
void dequeue();
void display();

int a[SIZE];
int rear = -1, front = -1;

int main() {
    enqueue(69);
    enqueue(70);
    enqueue(71);

    dequeue();
    dequeue();
    dequeue();
    
    enqueue(12);
    return 0;
}

void enqueue(int n) {
    if(rear == SIZE-1) {
        printf("Overflow!!!\n");
    } else {
        if(front == -1) {
            front = 0;
        }
        rear = rear + 1;
        a[rear] = n;
        printf("Enqueued: %d.\n", n);
    }
    printf("\n");
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Underflow!!!\n");
    } else {
        printf("Dequeued: %d.\n", a[front]);
        front = front + 1;
    }
    printf("\n");
}

void display() {
    if(front == -1 || front > rear) {
        printf("Empty Queue!!!\n");
    } else {
        printf("Queue:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    printf("\n");
}