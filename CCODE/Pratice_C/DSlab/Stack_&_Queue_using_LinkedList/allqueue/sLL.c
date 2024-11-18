#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_beg(struct node* head, int data) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
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

struct node* add_at_pos(struct node* head, int data, int pos) {
    if (head == NULL && pos != 1) {
        printf("List is empty, can't add at position %d\n", pos);
        return head;
    }

    if (pos < 1) {
        printf("Invalid position\n");
        return head;
    }

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    if (pos == 1) {
        head = add_beg(head, data);
        return head;
    }

    pos--;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL) {
        printf("Position out of bounds\n");
        free(temp);
    } else {
        temp->link = ptr->link;
        ptr->link = temp;
    }
    return head;
}

struct node* add_before_pos(struct node* head, int data, int pos) {
    if (head == NULL) {
        printf("List is empty, can't add before position %d\n", pos);
        return head;
    }

    if (pos < 1) {
        printf("Invalid position\n");
        return head;
    }

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    if (pos == 1) {
        head = add_beg(head, data);
        return head;
    }

    pos--;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL) {
        printf("Position out of bounds\n");
        free(temp);
    } else {
        temp->link = ptr->link;
        ptr->link = temp;
    }
    return head;
};

struct node* add_after_pos(struct node* head, int data, int pos) {
    if (head == NULL) {
        printf("List is empty, can't add after position %d\n", pos);
        return head;
    }

    if (pos < 1) {
        printf("Invalid position\n");
        return head;
    }

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL) {
        printf("Position out of bounds\n");
        free(temp);
    } else {
        temp->link = ptr->link;
        ptr->link = temp;
    }
    return head;
}


struct node* delete_at_beg(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node *ptr = head;
        printf("Deleted element is %d\n", head->data);
        head = ptr->link;
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

struct node* delete_at_pos(struct node *head, int pos) {
    if (head == NULL) {
        printf("List is empty, can't add before position %d\n", pos);
        return head;
    }

    if (pos < 1) {
        printf("Invalid position\n");
        return head;
    }

    if (pos == 1) {
        head = delete_at_beg(head);
        return head;
    }

    struct node *ptr = head;
    struct node *ptr2 = NULL;

    pos--;
    while (pos > 0 && ptr->link != NULL) {
        ptr2 = ptr;
        ptr = ptr->link;
        pos--;
    }

    if (pos > 0 || ptr == NULL) {
        printf("Position out of bounds\n");
    } else {
        ptr2->link = ptr->link;
        printf("Deleted element is %d\n", ptr->data);
        free(ptr);
    }
    return head;
}

struct node* delete_before_pos(struct node* head, int pos) {
    if (head == NULL) {
        printf("List is empty, can't delete before position %d\n", pos);
        return head;
    }

    if (pos <= 1) {
        printf("No node exists before position %d\n", pos);
        return head;
    }

    if (head == NULL || head->link == NULL) {
        printf("List is too short to delete before position %d\n", pos);
        return head;
    }

    // If deleting the first node before position 2, it's equivalent to deleting at the beginning
    if (pos == 2) {
        return delete_at_beg(head);
    }

    struct node *ptr = head;
    struct node *ptr2 = NULL;

    // Traverse to the node just before the node preceding the position
    pos -= 2;  // Move back by 2 positions
    while (pos > 0 && ptr->link != NULL) {
        ptr2 = ptr;
        ptr = ptr->link;
        pos--;
    }

    if (pos > 0 || ptr->link == NULL) {
        printf("Position out of bounds\n");
    } else {
        struct node *temp = ptr;
        ptr2->link = ptr->link;
        printf("Deleted element before position %d is %d\n", pos + 2, temp->data);
        free(temp);
    }

    return head;
}

struct node* delete_after_pos(struct node* head, int pos) {    
    if (head == NULL || head->link == NULL) {
        printf("List is too short to delete after position %d\n", pos);
        return head;
    }

    struct node *ptr = head;

    // Traverse to the target position
    while (pos > 1 && ptr->link != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr->link == NULL) {
        printf("No node exists after position %d\n", pos + 1);
    } else {
        struct node *temp = ptr->link;
        ptr->link = temp->link;
        printf("Deleted element after position %d is %d\n", pos + 1, temp->data);
        free(temp);
    }

    return head;
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
    head->data = 1;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;
    head->link = ptr;
    display(head);
    
    head = add_beg(head, 3);
    printf("Insertion at beginning:\n");
    display(head);

    add_at_end(head, 4);
    printf("Insertion at end:\n");
    display(head);
    
    head = add_at_pos(head, 5, 1);
    printf("Insertion at position 1:\n");
    display(head);

    head = add_before_pos(head, 6, 2);
    printf("Insertion before position 2:\n");
    display(head);

    head = add_after_pos(head, 7, 3);
    printf("Insertion after position 3:\n");
    display(head);

    head = delete_at_beg(head);
    printf("Deletion at beginning:\n");
    display(head);

    delete_at_end(head);
    printf("Deletion at end:\n");
    display(head);

    head = delete_at_pos(head, 1);
    printf("Deletion at position 1:\n");
    display(head);

    head = delete_before_pos(head, 2);
    printf("Deletion before position 2:\n");
    display(head);

    head = delete_after_pos(head, 2);
    printf("Deletion after position 3:\n");
    display(head);
    
    return 0;
}