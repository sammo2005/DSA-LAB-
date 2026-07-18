#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createTree()
{
    int value;
    struct Node *node;

    printf("Enter value (-1 for NULL): ");
    scanf("%d", &value);

    if(value == -1)
        return NULL;

    node = (struct Node *)malloc(sizeof(struct Node));

    node->data = value;

    printf("Left child of %d\n", value);
    node->left = createTree();

    printf("Right child of %d\n", value);
    node->right = createTree();

    return node;
}

void preorder(struct Node *root)
{
    if(root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
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
    struct Node *root;

    printf("Create Binary Tree\n\n");

    root = createTree();

    printf("\nPreorder  : ");
    preorder(root);

    printf("\nInorder   : ");
    inorder(root);

    printf("\nPostorder : ");
    postorder(root);

    printf("\n");

    freeTree(root);

    return 0;
}
