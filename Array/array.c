#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;
    int pos, value, key;
    int found = 0;

    printf("Number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nCurrent Array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    /* Insert */

    printf("\nPosition to insert (1-%d): ", n + 1);
    scanf("%d", &pos);

    printf("Value: ");
    scanf("%d", &value);

    arr = realloc(arr, (n + 1) * sizeof(int));

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("\nArray after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    /* Delete */

    printf("\nPosition to delete (1-%d): ", n);
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    arr = realloc(arr, n * sizeof(int));

    printf("\nArray after deletion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    /* Search */

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found.\n");
    }

    free(arr);

    return 0;
}
