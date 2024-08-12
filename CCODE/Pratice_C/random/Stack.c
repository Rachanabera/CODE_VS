#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int *top, char **a, int size);
void pop(int *top, char **a);
void show(int top, char **a);

int main() {
    int size, top = -1,c = 0;
    printf("Enter size of Stack: \n");
    scanf("%d", &size);
    char *a[size];
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
                printf("Invalid Input!\n\n");
            break;
        }
    }
    return 0;
}

void push(int *top, char **a, int s) {
    if(*top == s - 1) {
        printf("Stack OverFlow!!!\n\n");
    } else {
        printf("Your Stack has %d empty spaces.\n", (s - ((*top) + 1)));
        if((s - ((*top) + 1)) == 1) {
            printf("Enter a value:\n");
            char buffer[100];
            scanf("%s", buffer);
            a[++(*top)] = malloc((strlen(buffer) + 1) * sizeof(char));
            strcpy(a[*top], buffer);
            printf("\n");
        } else {
            up:
            printf("How many value do you want to push right now?\n");
            int hm = 0;
            scanf("%d", &hm);
            if(hm > (s - ((*top) + 1))) {
                printf("You only have %d spaces!!!\n", (s - ((*top) + 1)));
                goto up;
            }
            else {
                for(int i = 0; i < hm; i++) {
                    printf("Enter value %d:\n", i + 1);
                    char buffer[100];
                    scanf("%s", buffer);
                    a[++(*top)] = malloc((strlen(buffer) + 1) * sizeof(char));
                    strcpy(a[*top], buffer);
                }
                printf("\n");
            }
        }
    }
}

void pop(int *top, char **a) {
    if(*top == -1) {
        printf("Stack Underflow!!!\n\n");
    } else {
        printf("Your Stack has %d values.\n", ((*top) + 1));
        if(((*top) + 1) == 1) {
            printf("Popped value: %s\n\n", a[(*top)]);
            free(a[*top]);
            (*top)--;
        } else {
            up:
            printf("How many value do you want to pop right now?\n");
            int hm = 0;
            scanf("%d", &hm);
            if(hm > ((*top) + 1)) {
                printf("You only have %d values!!!\n", ((*top) + 1));
                goto up;
            } else {
                for(int i = 0; i < hm; i++) {
                    printf("Popped value: %s\n", a[(*top)]);
                    free(a[*top]);
                    (*top)--;
                }
                printf("\n");
            }
        }
    }
}

void show(int top, char **a) {
    printf("Your stack");
    if(top == -1) {
        printf(" is Empty.\n\n");
    } else {
        printf(" has:\n");
        for(int i = 0; i <= top; i++) {
            printf("%s\n", a[i]);
        }
        printf("\n");
    }
}