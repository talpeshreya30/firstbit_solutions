#include<stdio.h>
void main()
{
    int n, ori, rem, sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    ori = n;
    while(n>0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(sum==ori)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}