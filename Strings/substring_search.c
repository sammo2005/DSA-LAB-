#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    char *word;
    int i, j;
    int found = 0;

    text = malloc(150 * sizeof(char));
    word = malloc(100 * sizeof(char));

    if(text == NULL || word == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter main string: ");
    fgets(text, 150, stdin);

    printf("Enter substring: ");
    fgets(word, 100, stdin);

    for(i = 0; text[i] != '\0'; i++)
    {
        j = 0;

        while(word[j] != '\n' &&
              word[j] != '\0' &&
              text[i + j] == word[j])
        {
            j++;
        }

        if(word[j] == '\n' || word[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found at position %d.\n", i);
    else
        printf("Substring not found.\n");

    free(text);
    free(word);

    return 0;
}
