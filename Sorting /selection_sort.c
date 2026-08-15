#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, j, small, temp;

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

    for(i = 0; i < n - 1; i++)
    {
        small = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[small])
                small = j;
        }

        if(small != i)
        {
            temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
