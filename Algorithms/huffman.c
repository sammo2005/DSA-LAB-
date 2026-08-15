#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char character;
    int frequency;

    struct Node *left;
    struct Node *right;
};

struct Node *createNode(char character, int frequency)
{
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    newNode->character = character;
    newNode->frequency = frequency;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void sortNodes(struct Node *nodes[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (nodes[j]->frequency > nodes[j + 1]->frequency)
            {
                struct Node *temp = nodes[j];
                nodes[j] = nodes[j + 1];
                nodes[j + 1] = temp;
            }
        }
    }
}

void printCodes(struct Node *root, int code[], int length)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        printf("%c : ", root->character);

        for (int i = 0; i < length; i++)
            printf("%d", code[i]);

        printf("\n");
        return;
    }

    code[length] = 0;
    printCodes(root->left, code, length + 1);

    code[length] = 1;
    printCodes(root->right, code, length + 1);
}

void freeTree(struct Node *root)
{
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);

    free(root);
}

int main()
{
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    struct Node *nodes[n];

    printf("Enter character and frequency:\n");

    for (int i = 0; i < n; i++)
    {
        char character;
        int frequency;

        scanf(" %c %d", &character, &frequency);

        nodes[i] = createNode(character, frequency);
    }

    int count = n;

    while (count > 1)
    {
        sortNodes(nodes, count);

        struct Node *first = nodes[0];
        struct Node *second = nodes[1];

        struct Node *combined =
            createNode('$',
                       first->frequency + second->frequency);

        combined->left = first;
        combined->right = second;

        nodes[0] = combined;

        for (int i = 1; i < count - 1; i++)
            nodes[i] = nodes[i + 1];

        count--;
    }

    int code[50];

    printf("\nHuffman Codes:\n");

    printCodes(nodes[0], code, 0);

    freeTree(nodes[0]);

    return 0;
}
