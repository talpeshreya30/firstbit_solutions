#include <stdio.h>

char* mystrrchr(char str[], char ch)
{
    int i = 0;
    char *result = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            result = &str[i];

        i++;
    }

    return result;
}

int main()
{
    char str[100], ch;
    char *result;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    result = mystrrchr(str, ch);

    if(result != NULL)
        printf("Last occurrence: %s", result);
    else
        printf("Character not found");

    return 0;
}