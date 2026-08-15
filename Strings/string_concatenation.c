#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *first;
    char *second;
    char *result;
    int i = 0, j = 0;

    first = malloc(100 * sizeof(char));
    second = malloc(100 * sizeof(char));
    result = malloc(200 * sizeof(char));

    if(first == NULL || second == NULL || result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter first string: ");
    fgets(first, 100, stdin);

    printf("Enter second string: ");
    fgets(second, 100, stdin);

    while(first[i] != '\0' && first[i] != '\n')
    {
        result[i] = first[i];
        i++;
    }

    while(second[j] != '\0' && second[j] != '\n')
    {
        result[i] = second[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("Combined string: %s\n", result);

    free(first);
    free(second);
    free(result);

    return 0;
}
