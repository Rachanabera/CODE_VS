# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int n) {
    if(root == NULL) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = n;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if(n < root->data) {
        root->left = insert(root->left, n);
    } else if(n > root->data) {
        root->right = insert(root->right, n);
    }
    return root;
}

struct node *search(struct node *root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }
    if (value < root->data) {
        return search(root->left, value);
    }
    return search(root->right, value);
}

int main() {
    struct node *root = NULL;
    int c, n;
    clrscr();
    while(1) {
        printf("****Menu****\n1.Insert,\n2.Search,\n3.Exit.\nEnter your choice:\n");
        scanf("%d", &c);
        switch(c) {
            case 1:
                printf("Enter the value to insert:\n");
                scanf("%d", &n);
                root = insert(root, n);
            break;
            case 2:
                printf("Enter the value to search:\n");
                scanf("%d", &n);
                if(search(root, n) != NULL) {
                    printf("Element found in BST\n");
                } else {
                    printf("Element not found in BST\n");
                }
            break;
            case 3:
                return 0;
            break;
            default:
                printf("Invalid Input!!!!!\n");
            break;
        }
    }
}