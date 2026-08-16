#include <stdio.h>

void mystrncpy(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n && str2[i] != '\0'; i++)
        str1[i] = str2[i];

    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];
    int n;

    printf("Enter string: ");
    gets(str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    mystrncpy(str1, str2, n);

    printf("Copied string = %s", str1);

    return 0;
}