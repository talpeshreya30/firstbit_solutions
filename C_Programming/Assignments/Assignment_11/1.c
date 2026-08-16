#include <stdio.h>

void mystrcpy(char str1[], char str2[])
{
    int i = 0;

    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter string: ");
    gets(str2);

    mystrcpy(str1, str2);

    printf("Copied string = %s", str1);

    return 0;
}