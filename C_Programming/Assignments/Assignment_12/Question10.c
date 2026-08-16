#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++);

    j = i - 1;
    i = 0;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}