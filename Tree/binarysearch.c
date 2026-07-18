#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insert(struct Node *root, int value)
{
    if(root == NULL)
        return createNode(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

struct Node* search(struct Node *root, int value)
{
    if(root == NULL || root->data == value)
        return root;

    if(value < root->data)
        return search(root->left, value);

    return search(root->right, value);
}

void inorder(struct Node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void freeTree(struct Node *root)
{
    if(root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);

    free(root);
}

int main()
{
    struct Node *root = NULL;
    struct Node *result;

    int n, value, key, i;

    printf("How many values: ");
    scanf("%d", &n);

    printf("Enter values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nBST (Inorder): ");
    inorder(root);

    printf("\n\nEnter value to search: ");
    scanf("%d", &key);

    result = search(root, key);

    if(result != NULL)
        printf("Element found.\n");
    else
        printf("Element not found.\n");

    freeTree(root);

    return 0;
}
