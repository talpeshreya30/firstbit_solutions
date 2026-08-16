#include <stdio.h>

char* mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];

        i++;
    }

    return NULL;
}

int main()
{
    char str[100], ch;
    char *result;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    result = mystrchr(str, ch);

    if(result != NULL)
        printf("Character found: %s", result);
    else
        printf("Character not found");

    return 0;
}