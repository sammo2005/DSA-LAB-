#include <stdio.h>
#include <string.h>

void compareStrings(char str1[], char str2[])
{
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else if (strcmp(str1, str2) > 0)
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");
}

void concatenateStrings(char str1[], char str2[])
{
    char result[200];

    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);
}

void stringLength(char str[])
{
    printf("Length: %lu\n", strlen(str));
}

void searchCharacter(char str[])
{
    char ch;

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    char *found = strchr(str, ch);

    if (found != NULL)
        printf("Character '%c' found at position %ld.\n",
               ch, found - str + 1);
    else
        printf("Character '%c' was not found.\n", ch);
}

void searchSubstring(char str[])
{
    char substring[100];

    printf("Enter substring to search: ");
    scanf(" %[^\n]", substring);

    char *found = strstr(str, substring);

    if (found != NULL)
        printf("Substring found at position %ld.\n",
               found - str + 1);
    else
        printf("Substring was not found.\n");
}

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("\n--- String Operations ---\n");
    printf("1. Compare Strings\n");
    printf("2. Concatenate Strings\n");
    printf("3. Find Length\n");
    printf("4. Search Character\n");
    printf("5. Search Substring\n");
    printf("6. Exit\n");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                compareStrings(str1, str2);
                break;

            case 2:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                concatenateStrings(str1, str2);
                break;

            case 3:
                stringLength(str1);
                break;

            case 4:
                searchCharacter(str1);
                break;

            case 5:
                searchSubstring(str1);
                break;

            case 6:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
