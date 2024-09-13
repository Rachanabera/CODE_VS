#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_beg(struct node* head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = head;
    head = ptr;
    return head;
}

void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL) {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void add_at_pos(struct node* head, int data, int pos) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    pos--;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr != NULL) {
        temp->link = ptr->link;
        ptr->link = temp;
    } else {
        printf("Position out of bounds\n");
    }
}


struct node* delete_at_beg(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node *ptr = head;
        printf("Deleted element is %d\n", head->data);
        head = head->link;
        free(ptr);
    }
    return head;
}

void delete_at_end(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node *ptr = head;
        struct node *ptr2 = head;
        while (ptr->link != NULL) {
            ptr2 = ptr;
            ptr = ptr->link;
        }
        ptr2->link = NULL;
        printf("Deleted element is %d\n", ptr->data);
        free(ptr);
    }
}

void delete_at_pos(struct node *head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node *ptr = head;
        struct node *ptr2 = head;
        pos--;
        while (pos != 0) {
            ptr2 = ptr;
            ptr = ptr->link;
            pos--;
        }
        ptr2->link = ptr->link;
        free(ptr);
    }
}

void display(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {   
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main() {
    printf("Original List:\n");
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;
    head->link = ptr;
    display(head);
    
    head = add_beg(head, 3);
    printf("Insertion at beginning:\n");
    display(head);

    add_at_end(head, 69);
    printf("Insertion at end:\n");
    display(head);
    
    add_at_pos(head, 67, 3);
    printf("Insertion at position 3:\n");
    display(head);

    printf("Updated List:\n");
    display(head);

    head = delete_at_beg(head);
    
    printf("list after deletion at beginning:\n");
    display(head);

    delete_at_end(head);
    printf("list after deletion at end:\n");
    display(head);

    delete_at_pos(head, 2);
    printf("list after deletion at position 3:\n");
    display(head);

    return 0;
}