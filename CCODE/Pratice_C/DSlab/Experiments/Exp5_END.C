#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_at_end();
void display();

int main() {
    int i, choice;
    clrscr();
    while(1)
    {
        printf("Operation to be performed on Linklist:-\n1.insert\n2.display\n3.exit\nenter your choise:-");
        scanf("%d",&choice);
        switch(choice)
        {
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
                printf("\nInvalid choice!!");
            break;
        }
    }
    getch();
    return 0;
}

void insert_at_end() {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
	printf("Memory allocation failed\n");
	return;
    }
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (head == NULL) {
	head = new_node;
    } else {
	struct node *temp = head;
	while (temp->next != NULL) {
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
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
