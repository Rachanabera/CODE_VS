#include <stdio.h>
#define SIZE 2

void push(int n);
void pop();
void peek();

int top = -1;
int a[SIZE];

int main() {
    
    push(69);
    push(70);
    push(71);

    pop();    
    pop();    
    pop();

    return 0;
}

void push(int n) {
    if (top == SIZE - 1) {
        printf("Stack overflow\n\n");
    } else {
        a[++top] = n;
        printf("Pushed %d in stack.\n", n);
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

void peek() {
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