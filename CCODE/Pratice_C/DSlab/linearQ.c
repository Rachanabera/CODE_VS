#include <stdio.h>
#include <stdlib.h>

# define SIZE 2

void enqueue();
void dequeue();
void display();

int a[SIZE];
int rear = -1;
int front = -1;

int main() {
    while(1) {
        int c = 0;
        printf("1. Enqueue,\n");
        printf("2. Dequeue,\n");
        printf("3. Display,\n");
        printf("4. Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c)
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
            exit(0);
        break;
        default:
            printf("Invalid Input!!!\n");
        break;
        }
    }
    return 0;
}

void enqueue() {
    int n;
    if(rear == SIZE-1) {
        printf("Overflow!!!\n");
    } else {
        if(front == -1) {
            front = 0;
        }
        printf("Enter number:\n");
        scanf("%d", &n);
        rear = rear + 1;
        a[rear] = n;
    }
    printf("\n");
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Underflow!!!\n");
    } else {
        printf("Deleted Element: %d\n", a[front]);
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