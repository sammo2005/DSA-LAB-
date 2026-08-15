#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    int i = 0;

    text = malloc(100 * sizeof(char));

    if(text == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(text, 100, stdin);

    while(text[i] != '\0' && text[i] != '\n')
        i++;

    printf("Length of string: %d\n", i);

    free(text);

    return 0;
}
