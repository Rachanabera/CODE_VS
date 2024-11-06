# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define TABLE_SIZE 7

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

HashTable* createHashTable() {
    int i;
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
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

int main() {
    HashTable* ht = createHashTable();
    int n, i, searchElement;
    clrscr();
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        insert(ht, element);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    if (search(ht, searchElement)) {
        printf("%d found in the hash table.\n", searchElement);
    } else {
        printf("%d not found in the hash table.\n", searchElement);
    }

    getch();
    return 0;
}