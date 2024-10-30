#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TABLE_SIZE 10

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

HashTable* createHashTable() {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        ht->table[i] = NULL;
    }
    return ht;
}

int hash(int key) {
    return key % TABLE_SIZE;
}

void insert(HashTable* ht, int key) {
    int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

int search(HashTable* ht, int key) {
    int index = hash(key);
    Node* current = ht->table[index];

    while (current != NULL) {
        if (current->data == key) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

void freeHashTable(HashTable* ht) {
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        Node* current = ht->table[i];
        while (current != NULL) {
            Node* toDelete = current;
            current = current->next;
            free(toDelete);
        }
    }
    free(ht);
}

int main() {
    HashTable* ht = createHashTable();
    int n, i;
    int* elements;
    int searchElement;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    elements = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
        insert(ht, elements[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    if (search(ht, searchElement)) {
        printf("%d found in the hash table.\n", searchElement);
    } else {
        printf("%d not found in the hash table.\n", searchElement);
    }

    free(elements);
    freeHashTable(ht);

    getch();
    return 0;
}