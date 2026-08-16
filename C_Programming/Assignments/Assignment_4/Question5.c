#include<stdio.h>
void main()
{
    int n, choice, i, flag, rev, rem, sum, original;

    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");
    
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        if(n%2==0)
            printf("Even");
        else
            printf("Odd");
    }
    else if(choice==2)
    {
        flag=0;

        if(n<2)
            flag=1;

        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            printf("Prime");
        else
            printf("Not Prime");
    }
    else if(choice==3)
    {
        original=n;
        rev=0;

        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }

        if(rev==original)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(n>0)
            printf("Positive");
        else if(n<0)
            printf("Negative");
        else
            printf("Zero");
    }
    else if(choice==5)
    {
        rev=0;

        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }

        printf("Reverse = %d",rev);
    }
    else if(choice==6)
    {
        sum=0;

        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }

        printf("Sum of digits = %d",sum);
    }
    else
    {
        printf("Invalid choice");
    }
}