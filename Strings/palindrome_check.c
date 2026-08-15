#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    int start = 0;
    int end;
    int isPalindrome = 1;

    text = malloc(100 * sizeof(char));

    if(text == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(text, 100, stdin);

    end = 0;

    while(text[end] != '\0' && text[end] != '\n')
        end++;

    end--;

    while(start < end)
    {
        if(text[start] != text[end])
        {
            isPalindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    free(text);

    return 0;
}
