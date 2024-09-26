#include <stdio.h>
#define SIZE 2

void push();
void pop();
void show();
void peek();

int top = -1;
int a[SIZE];

int main() {
    int c;
    while(1) {
        printf("Press 1 to push,\npress 2 to pop,\npress 3 to show,\npress 4 to peek Stack,\npress 5 to stop.\n");
        scanf("%d", &c);
        printf("\n");
        switch(c) {
            case 1:
                push();
            break;
            case 2:
                pop();
            break;
            case 3:
                show();
            break;
            case 4:
                peek();
            break;
            case 5:
                return 0;
            default:
                printf("Invalid Input!\n");
            break;
        }
    }
    return 0;
}

void push() {
    if (top == SIZE - 1) {
        printf("Stack overflow\n\n");
    } else {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        a[++top] = value;
        printf("\n");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n\n");
    } else {
        printf("Popped value: %d\n", a[top--]);
        printf("\n");
    }
}

void show() {
    if (top == -1) {
        printf("Stack is empty\n\n");
    } else {
        printf("Stack elements:\n");
        for (int i = 0; i <= top; i++) {
            printf("%d ", a[i]);
        }
        printf("\n\n");
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n\n");
    } else {
        printf("element on top is: %d\n", a[top]);
        printf("\n");
    }
}