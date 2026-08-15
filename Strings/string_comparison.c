#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a;
    char *b;
    int i = 0;
    int same = 1;

    a = malloc(100 * sizeof(char));
    b = malloc(100 * sizeof(char));

    if(a == NULL || b == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter first string: ");
    fgets(a, 100, stdin);

    printf("Enter second string: ");
    fgets(b, 100, stdin);

    while(a[i] != '\0' && a[i] != '\n' &&
          b[i] != '\0' && b[i] != '\n')
    {
        if(a[i] != b[i])
        {
            same = 0;
            break;
        }

        i++;
    }

    if(a[i] != b[i])
        same = 0;

    if(same)
        printf("Strings are equal.\n");
    else
        printf("Strings are different.\n");

    free(a);
    free(b);

    return 0;
}
