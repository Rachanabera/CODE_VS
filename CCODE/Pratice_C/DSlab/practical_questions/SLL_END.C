# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_at_end();
void display();

int main() {
    int i, c;
    clrscr();
    while(1) {
        printf("****Options:****\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &c);
        switch(c) {
            case 1:
                insert_at_end();
            break;
            case 2:
                display();
            break;
            case 3:
                return 0;
            break;
            default:
                printf("\nInvalid Input!!!!!\n");
            break;
        }
    }
}

void insert_at_end() {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if(head == NULL) {
        head = new_node;
    } else {
        struct node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void display() {
    struct node *temp;
    if (head == NULL) {
        printf("No nodes in the linked list\n");
        return;
    }
     
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}