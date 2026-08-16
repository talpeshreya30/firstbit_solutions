#include<stdio.h>
void main()
{
    int n, fst, lst, sum;
    printf("Enter a number:\n");
    scanf("%d",&n);
    lst = n%10;
    while(n>=10)
    {
        n = n/10;
    }
    fst = n;
    sum = fst+lst;
    printf("Sum = %d",sum);
}