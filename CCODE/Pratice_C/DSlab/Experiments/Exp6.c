#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insert(struct node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

void inorderTraversal(struct node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
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

struct node *minValueNode(struct node *node) {
    struct node *current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node *deleteNode(struct node *root, int value) {
    struct node *temp = root;
    if (root == NULL) {
	return root;
    }
    if (value < root->data) {
	root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
	root->right = deleteNode(root->right, value);
    } else {
	if (root->left == NULL) {
	    struct node *temp = root->right;
	    free(root);
	    return temp;
	} else if (root->right == NULL) {
	    struct node *temp = root->left;
	    free(root);
	    return temp;
	}
	temp = minValueNode(root->right);
	root->data = temp->data;
	root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct node *root = NULL;
    int choice, value;
    
    do {
        printf("\nBinary Search Tree Operations:");
        printf("\n1. Insert");
        printf("\n2. Inorder Traversal");
        printf("\n3. Preorder Traversal");
        printf("\n4. Postorder Traversal");
        printf("\n5. Search");
        printf("\n6. Delete");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                if (search(root, value) != NULL) {
                    printf("Element found in the BST.\n");
                } else {
                    printf("Element not found in the BST.\n");
                }
                break;
            case 6:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 7:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while(choice != 7);

    return 0;
}