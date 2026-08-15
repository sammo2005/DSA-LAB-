#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, key;
    int low, high, mid;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements in sorted order:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = mid;
            break;
        }

        if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(found == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", found + 1);

    free(arr);

    return 0;
}
