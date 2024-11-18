#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;
struct Node* new_node = NULL;

void push(int val) {
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = val;
    
    if (top == NULL) {
        new_node->next = NULL;
        top = new_node;
    } else {
        new_node->next = top;
        top = new_node;
    }
    printf("Pushed: %d\n", val);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;  // Return a sentinel value to indicate empty stack
    }
    
    struct Node* temp = top;
    int popped_value = top->data;
    top = top->next;
    free(temp);
    
    printf("Popped: %d\n", popped_value);
}

void printList() {
    struct Node* temp = top;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    push(3);
    push(2);
    push(1);
    
    printList();
    
    pop();
    pop();
    
    printList();
    
    push(4);
    
    printList();
    
    return 0;
}