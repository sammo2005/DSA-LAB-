#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, key;
    int position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if(position == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", position + 1);

    free(arr);

    return 0;
}
