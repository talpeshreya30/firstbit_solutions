#include<stdio.h>
void main()
{
    int n, i=2, flag=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");
}