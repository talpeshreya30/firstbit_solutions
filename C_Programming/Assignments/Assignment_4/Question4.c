#include<stdio.h>
void main()
{
    int n, i, num, rem, j, fact, sum;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Strong numbers: ");
    for(i=1; i<=n; i++)
    {
        num=i;
        sum=0;

        while(num>0)
        {
            rem=num%10;
            fact=1;

            for(j=1; j<=rem; j++)
            {
                fact=fact*j;
            }

            sum=sum+fact;
            num=num/10;
        }

        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}