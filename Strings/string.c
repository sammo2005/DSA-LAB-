#include <stdio.h>
#include <stdlib.h>

int strLength(char *text)
{
    int count = 0;

    while(text[count] != '\0')
        count++;

    return count;
}

void copyString(char *source, char *destination)
{
    int i = 0;

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

void reverseString(char *text)
{
    int left = 0;
    int right = strLength(text) - 1;

    while(left < right)
    {
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char *str1;
    char *str2;

    str1 = (char *)malloc(100 * sizeof(char));
    str2 = (char *)malloc(100 * sizeof(char));

    if(str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str1,100,stdin);

    int len = strLength(str1);

    if(str1[len-1]=='\n')
        str1[len-1]='\0';

    printf("\nLength = %d\n", strLength(str1));

    copyString(str1,str2);

    printf("Copied String : %s\n",str2);

    reverseString(str1);

    printf("Reversed String : %s\n",str1);

    free(str1);
    free(str2);

    return 0;
}
