// bst.c

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

// Function to create a new node
Node* newNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Insert a new node into the BST
Node* insert(Node* root, char data) {
    if (root == NULL) {
        return newNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Search for a node in the BST (Not used in main, but keeping for completeness)
Node* search(Node* root, char data) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == data) {
        return root;
    }
    if (data < root->data) {
        return search(root->left, data);
    }
    return search(root->right, data);
}

// Count the number of nodes in the BST
int countNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Calculate the height of the tree
int treeHeight(Node* root) {
    if (root == NULL) {
        return -1;
    }
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Print all the nodes in sorted order (In-order traversal)
void printSorted(Node* root) {
    if (root == NULL) {
        return;
    }
    printSorted(root->left);
    printf("%c ", root->data);
    printSorted(root->right);
}
