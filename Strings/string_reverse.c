#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    int left = 0;
    int right;
    char temp;

    text = malloc(100 * sizeof(char));

    if(text == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(text, 100, stdin);

    right = 0;

    while(text[right] != '\0' && text[right] != '\n')
        right++;

    right--;

    while(left < right)
    {
        temp = text[left];
        text[left] = text[right];
        text[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", text);

    free(text);

    return 0;
}
