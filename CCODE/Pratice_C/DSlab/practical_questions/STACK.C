# include <stdio.h>
# include <conio.h>
# define MAX 5

int stack[MAX], top = -1;

void push(int stack[]);
void pop(int stack[]);
void display(int stack[]);

int main() {
    int c = 0;
    clrscr();
    while(1) {
	printf("****Menu****\n1.Push,\n2.Pop,\n3.Display,\n4.Exit.\nEnter your choice:\n");
	scanf("%d", &c);
	switch(c) {
	    case 1:
		push(stack);
	    break;
	    case 2:
		pop(stack);
	    break;
	    case 3:
		display(stack);
	    break;
	    case 4:
		return 0;
            break;
            default:
                printf("Invalid Input!!!!!\n");
            break;
        }
    }
}

void push(int stack[]) {
    int n = 0;
    if(top == MAX - 1) {
        printf("Stack Overflow!!!\n");
    } else {
        printf("Enter a value:\n");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void pop(int stack[]) {
    int n; 
    if(top == -1) {
        printf("Stack Underflow!!!\n");
    } else {
        n = stack[top];
        top--;
        printf("Deleted number is: %d\n", n);
    }
}

void display(int stack[]) {
    int i = 0;
    if(top == -1) {
        printf("Stack is Empty!!!\n");
    } else {
        for(i = top; i > -1; i--) {
            printf("\n%d", stack[i]);
        }
        printf("\n");
    }
}