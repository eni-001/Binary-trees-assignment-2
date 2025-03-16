// main.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

// Function to generate a random character between 'a' and 'z'
char generateRandomChar() {
    return 'a' + rand() % 26;
}

int main() {
    srand(time(NULL));  // Seed the random number generator
    Node* root = NULL;

    // Insert random characters into the tree (between 11 and 20 characters)
    int numChars = 11 + rand() % 10;  // Random number between 11 and 20
    printf("Inserting %d random characters:\n", numChars);

    for (int i = 0; i < numChars; i++) {
        char c = generateRandomChar();
        printf("%c ", c);
        root = insert(root, c);
    }
    printf("\n");

    // Print the tree in sorted order (in-order traversal)
    printf("Sorted characters from the tree:\n");
    printSorted(root);
    printf("\n");

    // Print the number of nodes in the tree
    int nodeCount = countNodes(root);
    printf("Number of nodes in the tree: %d\n", nodeCount);

    // Print the height of the tree
    int height = treeHeight(root);
    printf("Height of the tree: %d\n", height);

    return 0;
}
