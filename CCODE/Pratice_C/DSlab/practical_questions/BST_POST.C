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


void postorder(struct node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root = NULL;
    int c, n;
    clrscr();
    while(1) {
        printf("****Menu****\n1.Insert,\n2.Postorder,\n3.Exit.\nEnter your choice:\n");
        scanf("%d", &c);
        switch(c) {
            case 1:
                printf("Enter the value to insert:\n");
                scanf("%d", &n);
                root = insert(root, n);
            break;
            case 2:
                printf("Postorder Traversal:\n");
                postorder(root);
                printf("\n");
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