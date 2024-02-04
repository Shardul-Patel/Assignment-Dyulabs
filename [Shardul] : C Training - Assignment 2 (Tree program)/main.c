#include <stdio.h>
#include "tree.h"
#include "tree.c"

int main() 
{
    Node *root = NULL;
    int n,i;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        // Prompt the user to create a node
        Node *newNode = createNode();

        // Insert the created node into the tree
        insertNode(&root, newNode->id, newNode->project);
    }

    printf("Tree Height: %d\n", treeHeight(root));

    freeTree(root);

    return 0;
}
