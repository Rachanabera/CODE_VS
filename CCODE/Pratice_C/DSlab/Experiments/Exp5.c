#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function prototypes
void createLinkedList();
void insertNode();
void deleteNode();
void displayList();
void insertAtBeginning();
void insertAtEnd();
void insertAfterNode();
void insertBeforeNode();
void deleteFirstNode();
void deleteLastNode();
void deleteSpecificNode();

int main() {
    int choice;

    while (1) {
        printf("Operations on Linked List:\n");
        printf("1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createLinkedList();
                break;
            case 2:
                insertNode();
                break;
            case 3:
                deleteNode();
                break;
            case 4:
                displayList();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void createLinkedList() {
    int choice;
    struct Node *newNode, *temp;

    do {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (!newNode) {
            printf("Memory allocation failed.\n");
            return;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        printf("To continue adding nodes, press 1. Otherwise, press 2: ");
        scanf("%d", &choice);
    } while (choice == 1);
}

void displayList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertNode() {
    int choice;

    printf("Insert at:\n");
    printf("1. Beginning\n2. End\n3. After a specific node\n4. Before a specific node\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insertAtBeginning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAfterNode();
            break;
        case 4:
            insertBeforeNode();
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void insertAtBeginning() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd() {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAfterNode() {
    int val;
    struct Node *newNode, *temp = head;

    if (head == NULL) {
        printf("List is empty. Insert at the beginning instead.\n");
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data of new node: ");
    scanf("%d", &newNode->data);
    printf("Enter the value after which to insert: ");
    scanf("%d", &val);

    while (temp != NULL && temp->data != val) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found.\n", val);
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertBeforeNode() {
    int val;
    struct Node *newNode, *temp = head, *prev = NULL;

    if (head == NULL) {
        printf("List is empty. Insert at the beginning instead.\n");
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data of new node: ");
    scanf("%d", &newNode->data);
    printf("Enter the value before which to insert: ");
    scanf("%d", &val);

    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found.\n", val);
        free(newNode);
    } else {
        newNode->next = temp;
        if (prev == NULL) {
            head = newNode;
        } else {
            prev->next = newNode;
        }
    }
}

void deleteNode() {
    int choice;

    printf("Delete:\n");
    printf("1. First node\n2. Last node\n3. Specific node\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            deleteFirstNode();
            break;
        case 2:
            deleteLastNode();
            break;
        case 3:
            deleteSpecificNode();
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void deleteFirstNode() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteLastNode() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head, *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        head = NULL;
    } else {
        prev->next = NULL;
    }

    free(temp);
}

void deleteSpecificNode() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    int val;
    printf("Enter the value of the node to be deleted: ");
    scanf("%d", &val);

    struct Node *temp = head, *prev = NULL;
    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found.\n", val);
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
}
