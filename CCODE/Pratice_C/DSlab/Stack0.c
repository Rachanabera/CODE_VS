#include <stdio.h>
#include <conio.h>

void push(int *top, int *a, int size);
void pop(int *top, int *a);
void show(int top, int *a);

int main() {
    int size, top = -1, c;

    printf("Enter size of Stack: \n");
    scanf("%d", &size);
    int a[size];

    while(1) {
        printf("Press 1 to push,\npress 2 to pop,\nand 3 to show Stack,\npress 4 to stop\n");
        scanf("%d", &c);
        printf("\n");
        switch(c) {
            case 1:
                push(&top, a, size);
            break;
            case 2:
                pop(&top, a);
            break;
            case 3:
                show(top, a);
            break;
            case 4:
                return 0;
            default:
                printf("Invalid Input!\n");
            break;
        }
    }
    return 0;
}

void push(int *top, int *a, int size) {
    if (*top == size - 1) {
        printf("Stack overflow\n\n");
    } else {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        a[++(*top)] = value;
        printf("\n");
    }
}

void pop(int *top, int *a) {
    if (*top == -1) {
        printf("Stack underflow\n\n");
    } else {
        printf("Popped value: %d\n", a[(*top)--]);
        printf("\n");
    }
}

void show(int top, int *a) {
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