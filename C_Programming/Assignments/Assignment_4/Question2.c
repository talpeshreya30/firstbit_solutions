#include<stdio.h>
void main()
{
    int n, i, j, flag;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Prime numbers:\n");
    for(i=2; i<=n; i++)
    {
        flag=0;

        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}