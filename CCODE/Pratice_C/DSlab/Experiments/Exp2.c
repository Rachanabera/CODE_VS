#include <stdio.h>
#include <conio.h>
# define MAX 5

int stack[MAX], top=-1;

void push(int stack[], int val);
int pop(int stack[]);
void display(int stack[]);

int main()
{
    int value, option;
    clrscr();
    do
    {
        printf("\n *****MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("\n Enter the number to be pushed on stack: ");
                scanf("%d", &value);
                push(stack, value);
            break;
            case 2:
                value = pop(stack);
                if(value != -1)
                    printf("\n The value deleted from stack is: %d", value);
            break;
            case 3:
                display(stack);
            break;
            case 4:
                return 0;
            break;
            default:
                printf("Invalid Input!!!");
            break;
        }
    }while(option != 4);
    getch();
    return 0;
}


void push(int stack[], int value)
{
    if(top == MAX-1) {
        printf("\n STACK OVERFLOW");
    } else {
        top++;
        stack[top] = value;
    }
}


int pop(int stack[])
{
    int value;
    if(top == -1) {
        printf("\n STACK UNDERFLOW");
        return -1;
    } else {
        value = stack[top];
        top--;
        return value;
    }
}




void display(int stack[])
{
    int i;
    if(top == -1) {
        printf("\n STACK IS EMPTY");
    } else {
        for(i=top;i>=0;i--) {
            printf("\n %d",stack[i]);
        }
        printf("\n"); 
    }
}