#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void insertNode(Node **root, int id, const char *project) 
{
    if (*root == NULL) 
        *root = createNode(id, project);
    else 
    {
        if (id < (*root)->id) 
            insertNode(&(*root)->left, id, project);
        else 
            insertNode(&(*root)->right, id, project);
    }
}

Node *createNode()
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode != NULL) 
    {
        printf("Enter ID for the new node: ");
        scanf("%d", &(newNode->id));
        printf("Enter project name for the new node (up to %d characters): ", MAX_PROJ_NAME - 1);
        scanf("%s", &(newNode->project));
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

void freeTree(Node *root) 
{
    if (root != NULL) 
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int treeHeight(Node *root) 
{
    if (root == NULL) 
        return 0;
    
    else 
    {
        int leftHeight = treeHeight(root->left);
        int rightHeight = treeHeight(root->right);

        if (leftHeight > rightHeight)
            return leftHeight + 1;
        else 
            return rightHeight + 1;
        
    }
}
