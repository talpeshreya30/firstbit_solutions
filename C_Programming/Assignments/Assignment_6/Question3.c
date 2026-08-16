//ASSIGNMENT 4
//Question 1


//TYPE 1:
#include <stdio.h>
void armstrongRange()
{
    int n=500,num,t,r,sum;
    for(num=1;num<=n;num++)
    {
        t=num;
        sum=0;
        while(t>0)
        {
            r=t%10;
            sum=sum+r*r*r;
            t=t/10;
        }
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    armstrongRange();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void armstrongRange(int n)
{
    int num,t,r,sum;
    for(num=1;num<=n;num++)
    {
        t=num;
        sum=0;
        while(t>0)
        {
            r=t%10;
            sum=sum+r*r*r;
            t=t/10;
        }
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    armstrongRange(500);
    return 0;
}


//ASSIGNMENT 4
//Question 2


//TYPE 1:
#include <stdio.h>
void primeRange()
{
    int n=20,num,i,count;
    for(num=2;num<=n;num++)
    {
        count=0;
        for(i=1;i<=num;i++)
            if(num%i==0) count++;
        if(count==2)
            printf("%d ",num);
    }
}
int main()
{
    primeRange();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void primeRange(int n)
{
    int num,i,count;
    for(num=2;num<=n;num++)
    {
        count=0;
        for(i=1;i<=num;i++)
            if(num%i==0) count++;
        if(count==2)
            printf("%d ",num);
    }
}
int main()
{
    primeRange(20);
    return 0;
}


//ASSIGNMENT 4
//Question 3


//TYPE 1:
#include <stdio.h>
void perfectRange()
{
    int n=100,num,i,sum;
    for(num=1;num<=n;num++)
    {
        sum=0;
        for(i=1;i<num;i++)
            if(num%i==0) sum=sum+i;
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    perfectRange();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void perfectRange(int n)
{
    int num,i,sum;
    for(num=1;num<=n;num++)
    {
        sum=0;
        for(i=1;i<num;i++)
            if(num%i==0) sum=sum+i;
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    perfectRange(100);
    return 0;
}


//ASSIGNMENT 4
//Question 4


//TYPE 1:
#include <stdio.h>
void strongRange()
{
    int n=500,num,t,r,i,f,sum;
    for(num=1;num<=n;num++)
    {
        t=num;
        sum=0;
        while(t>0)
        {
            r=t%10;
            f=1;
            for(i=1;i<=r;i++)
                f=f*i;
            sum=sum+f;
            t=t/10;
        }
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    strongRange();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void strongRange(int n)
{
    int num,t,r,i,f,sum;
    for(num=1;num<=n;num++)
    {
        t=num;
        sum=0;
        while(t>0)
        {
            r=t%10;
            f=1;
            for(i=1;i<=r;i++)
                f=f*i;
            sum=sum+f;
            t=t/10;
        }
        if(sum==num)
            printf("%d ",num);
    }
}
int main()
{
    strongRange(500);
    return 0;
}


//ASSIGNMENT 4
//Question 5


Operations:
1. Even or Odd
2. Prime or Not Prime
3. Palindrome or Not Palindrome
4. Positive, Negative or Zero
5. Reverse a Number
6. Sum of Digits

//TYPE 1:
#include <stdio.h>

void menu()
{
    int choice=1,n=121,i,count,rev=0,sum=0,t,r;

    if(choice==1)
    {
        if(n%2==0) printf("Even");
        else printf("Odd");
    }
    else if(choice==2)
    {
        count=0;
        for(i=1;i<=n;i++)
            if(n%i==0) count++;
        if(count==2) printf("Prime");
        else printf("Not Prime");
    }
    else if(choice==3)
    {
        t=n;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==n) printf("Palindrome");
        else printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(n>0) printf("Positive");
        else if(n<0) printf("Negative");
        else printf("Zero");
    }
    else if(choice==5)
    {
        t=n;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        printf("Reverse = %d",rev);
    }
    else if(choice==6)
    {
        t=n;
        while(t>0)
        {
            sum=sum+t%10;
            t=t/10;
        }
        printf("Sum of digits = %d",sum);
    }
    else
        printf("Invalid choice");
}

int main()
{
    menu();
    return 0;
}

//TYPE 2:
#include <stdio.h>

void menu(int choice,int n)
{
    int i,count,rev=0,sum=0,t,r;

    if(choice==1)
    {
        if(n%2==0) printf("Even");
        else printf("Odd");
    }
    else if(choice==2)
    {
        count=0;
        for(i=1;i<=n;i++)
            if(n%i==0) count++;
        if(count==2) printf("Prime");
        else printf("Not Prime");
    }
    else if(choice==3)
    {
        t=n;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==n) printf("Palindrome");
        else printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(n>0) printf("Positive");
        else if(n<0) printf("Negative");
        else printf("Zero");
    }
    else if(choice==5)
    {
        t=n;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        printf("Reverse = %d",rev);
    }
    else if(choice==6)
    {
        t=n;
        while(t>0)
        {
            sum=sum+t%10;
            t=t/10;
        }
        printf("Sum of digits = %d",sum);
    }
    else
        printf("Invalid choice");
}

int main()
{
    menu(1,121);
    return 0;
}