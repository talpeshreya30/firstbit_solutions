#include <stdio.h>

int main()
{
    char str[100], temp;
    int i = 0, last;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    last = i - 1;

    temp = str[0];
    str[0] = str[last];
    str[last] = temp;

    printf("New string = %s", str);

    return 0;
}