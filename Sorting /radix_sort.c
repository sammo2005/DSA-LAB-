#include <stdio.h>
#include <stdlib.h>

int biggest(int arr[], int n)
{
    int max = arr[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

void radixSort(int arr[], int n)
{
    int *output;
    int count[10] = {0};
    int max, place, i, digit;

    output = malloc(n * sizeof(int));

    if(output == NULL)
        return;

    max = biggest(arr, n);

    for(place = 1; max / place > 0; place *= 10)
    {
        for(i = 0; i < n; i++)
        {
            digit = (arr[i] / place) % 10;
            count[digit]++;
        }

        for(i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for(i = n - 1; i >= 0; i--)
        {
            digit = (arr[i] / place) % 10;
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }

        for(i = 0; i < n; i++)
            arr[i] = output[i];

        for(i = 0; i < 10; i++)
            count[i] = 0;
    }

    free(output);
}

int main()
{
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter non-negative elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    radixSort(arr, n);

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
