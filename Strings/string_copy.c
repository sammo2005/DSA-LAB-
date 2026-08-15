#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *source;
    char *copy;
    int i = 0;

    source = malloc(100 * sizeof(char));
    copy = malloc(100 * sizeof(char));

    if(source == NULL || copy == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(source, 100, stdin);

    while(source[i] != '\0')
    {
        copy[i] = source[i];
        i++;
    }

    copy[i] = '\0';

    printf("Copied string: %s", copy);

    free(source);
    free(copy);

    return 0;
}
