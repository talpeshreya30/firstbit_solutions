#include <stdio.h>

char* mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' &&
              i + j < n &&
              str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int main()
{
    char str[100], sub[100];
    int n;
    char *result;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    printf("Enter limit: ");
    scanf("%d", &n);

    result = mystrnstr(str, sub, n);

    if(result != NULL)
        printf("Substring found: %s", result);
    else
        printf("Substring not found");

    return 0;
}