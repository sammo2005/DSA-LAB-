#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int total = right - left + 1;

    int *temp = malloc(total * sizeof(int));

    if(temp == NULL)
        return;

    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = 0; i < total; i++)
        arr[left + i] = temp[i];

    free(temp);
}

void mergeSort(int arr[], int left, int right)
{
    int mid;

    if(left >= right)
        return;

    mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
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

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
