#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL; // Global variable

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertatbeg(int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    printf("The inserted element is: %d\n", data);
}

void insertatend(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("The node inserted in the last is %d\n", data);
}

void insertatpos(int data, int n) {
    if (n <= 0) {
        printf("Invalid position\n");
        return;
    }
    struct Node* newNode = createNode(data);
    if (n == 1) {
        newNode->next = head;
        head = newNode;
        printf("The inserted number at position %d is %d\n", n, data);
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < n - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("The inserted number at position %d is %d\n", n, data);
}

void insertafterpos(int data, int n) {
    if (n <= 0) {
        printf("Invalid position\n");
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < n && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d after position %d\n", data, n);
}

void insertbeforepos(int data, int n) {
    if (n <= 1) {
        insertatbeg(data);
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < n - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d before position %d\n", data, n);
}

void deleteatbeg() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    printf("The element %d is deleted from beginning\n", temp->data);
    free(temp);
}

void deleteatend() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    if (head->next == NULL) {
        printf("%d is deleted\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    struct Node* pretemp = NULL;
    while (temp->next != NULL) {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = NULL;
    printf("%d is deleted\n", temp->data);
    free(temp);
}

void deleteatpos(int n) {
    if (n <= 0 || head == NULL) {
        printf("Invalid position or the list is empty\n");
        return;
    }
    struct Node* temp = head;
    if (n == 1) {
        head = head->next;
        printf("Deleted element at position %d is %d\n", n, temp->data);
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    for (int i = 1; i < n && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }
    prev->next = temp->next;
    printf("Deleted element at position %d is %d\n", n, temp->data);
    free(temp);
}

void deleteafterpos(int n) {
    if (n <= 0 || head == NULL) {
        printf("Invalid position or list is empty\n");
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < n && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("No element exists after position %d\n", n);
        return;
    }
    struct Node* temp1 = temp->next;
    temp->next = temp1->next;
    printf("Deleted element after position %d is %d\n", n, temp1->data);
    free(temp1);
}

void deletebeforepos(int n) {
    if (n <= 1 || head == NULL || head->next == NULL) {
        printf("No element exists before position %d\n", n);
        return;
    }
    if (n == 2) {
        deleteatbeg();
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < n - 2 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("No element exists before position %d\n", n);
        return;
    }
    struct Node* temp1 = temp->next;
    temp->next = temp1->next;
    printf("Deleted element before position %d is %d\n", n, temp1->data);
    free(temp1);
}

void displaylist() {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }
    printf("SINGLY LINKED LIST\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    // Insertion operations
    insertatbeg(10); // Insert at beginning
    insertatbeg(20); // Insert at beginning
    insertatend(50); // Insert at end
    insertatend(70); // Insert at end
    insertatpos(40, 3); // Insert at position 3
    insertafterpos(60, 4); // Insert after position 4
    insertbeforepos(30, 2); // Insert before position 2

    // Display the list after insertions
    printf("List after insertions:\n");
    displaylist();

    // Deletion operations
    deleteatbeg(); // Delete from beginning
    deleteatend(); // Delete from end
    deleteatpos(3); // Delete from position 3
    deleteafterpos(2); // Delete after position 2
    deletebeforepos(2); // Delete before position 2

    // Display the list after deletions
    printf("List after deletions:\n");
    displaylist();

    return 0;
}