// bst.h

#ifndef BST_H
#define BST_H

// Define the structure for a tree node
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

// Function prototypes
Node* insert(Node* root, char data);
Node* search(Node* root, char data);
int countNodes(Node* root);
int treeHeight(Node* root);
void printSorted(Node* root);

#endif
#pragma once
