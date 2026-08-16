
//ASSIGNMENT 3
//Question 1


//TYPE 1:
#include <stdio.h>
void printNumbers()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d ",i);
}
int main()
{
    printNumbers();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void printNumbers(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
int main()
{
    printNumbers(10);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int printNumbers()
{
    return 10;
}
int main()
{
    int i,n=printNumbers();
    for(i=1;i<=n;i++)
        printf("%d ",i);
    return 0;
}

//TYPE 4:
#include <stdio.h>
int printNumbers(int n)
{
    return n;
}
int main()
{
    int i,n=printNumbers(10);
    for(i=1;i<=n;i++)
        printf("%d ",i);
    return 0;
}


//ASSIGNMENT 3
//Question 2


//TYPE 1:
#include <stdio.h>
void table()
{
    int n=5,i;
    for(i=1;i<=10;i++)
        printf("%d ",n*i);
}
int main()
{
    table();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void table(int n)
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d ",n*i);
}
int main()
{
    table(5);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int table()
{
    return 5;
}
int main()
{
    int n=table(),i;
    for(i=1;i<=10;i++)
        printf("%d ",n*i);
    return 0;
}

//TYPE 4:
#include <stdio.h>
int table(int n)
{
    return n;
}
int main()
{
    int n=table(5),i;
    for(i=1;i<=10;i++)
        printf("%d ",n*i);
    return 0;
}


//ASSIGNMENT 3
//Question 3

(RANGE PROGRAM - ONLY TYPE 1 AND TYPE 2)

//TYPE 1:
#include <stdio.h>
void sumRange()
{
    int start=1,end=5,i,sum=0;
    for(i=start;i<=end;i++)
        sum=sum+i;
    printf("Sum = %d",sum);
}
int main()
{
    sumRange();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void sumRange(int start,int end)
{
    int i,sum=0;
    for(i=start;i<=end;i++)
        sum=sum+i;
    printf("Sum = %d",sum);
}
int main()
{
    sumRange(1,5);
    return 0;
}


//ASSIGNMENT 3
//Question 4


//TYPE 1:
#include <stdio.h>
void prime()
{
    int n=7,i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0) count++;
    if(count==2) printf("Prime");
    else printf("Not Prime");
}
int main()
{
    prime();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0) count++;
    if(count==2) printf("Prime");
    else printf("Not Prime");
}
int main()
{
    prime(7);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int prime()
{
    int n=7,i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0) count++;
    return count==2;
}
int main()
{
    if(prime()) printf("Prime");
    else printf("Not Prime");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
        if(n%i==0) count++;
    return count==2;
}
int main()
{
    if(prime(7)) printf("Prime");
    else printf("Not Prime");
    return 0;
}


//ASSIGNMENT 3
//Question 5


//TYPE 1:
#include <stdio.h>
void armstrong()
{
    int n=153,t,r,sum=0;
    t=n;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
int main()
{
    armstrong();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void armstrong(int n)
{
    int t=n,r,sum=0;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
int main()
{
    armstrong(153);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int armstrong()
{
    int n=153,t,r,sum=0;
    t=n;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    return sum==n;
}
int main()
{
    if(armstrong()) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int armstrong(int n)
{
    int t=n,r,sum=0;
    while(t>0)
    {
        r=t%10;
        sum=sum+r*r*r;
        t=t/10;
    }
    return sum==n;
}
int main()
{
    if(armstrong(153)) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}


//ASSIGNMENT 3
//Question 6


//TYPE 1:
#include <stdio.h>
void perfect()
{
    int n=28,i,sum=0;
    for(i=1;i<n;i++)
        if(n%i==0) sum=sum+i;
    if(sum==n) printf("Perfect");
    else printf("Not Perfect");
}
int main()
{
    perfect();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
        if(n%i==0) sum=sum+i;
    if(sum==n) printf("Perfect");
    else printf("Not Perfect");
}
int main()
{
    perfect(28);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int perfect()
{
    int n=28,i,sum=0;
    for(i=1;i<n;i++)
        if(n%i==0) sum=sum+i;
    return sum==n;
}
int main()
{
    if(perfect()) printf("Perfect");
    else printf("Not Perfect");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
        if(n%i==0) sum=sum+i;
    return sum==n;
}
int main()
{
    if(perfect(28)) printf("Perfect");
    else printf("Not Perfect");
    return 0;
}


//ASSIGNMENT 3
//Question 7


//TYPE 1:
#include <stdio.h>
void factorial()
{
    int n=5,i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    printf("%d",f);
}
int main()
{
    factorial();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    printf("%d",f);
}
int main()
{
    factorial(5);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int factorial()
{
    int n=5,i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    printf("%d",factorial());
    return 0;
}

//TYPE 4:
#include <stdio.h>
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    printf("%d",factorial(5));
    return 0;
}


//ASSIGNMENT 3
//Question 8


//TYPE 1:
#include <stdio.h>
void strong()
{
    int n=145,t,r,i,f,sum=0;
    t=n;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++) f=f*i;
        sum=sum+f;
        t=t/10;
    }
    if(sum==n) printf("Strong");
    else printf("Not Strong");
}
int main()
{
    strong();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void strong(int n)
{
    int t=n,r,i,f,sum=0;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++) f=f*i;
        sum=sum+f;
        t=t/10;
    }
    if(sum==n) printf("Strong");
    else printf("Not Strong");
}
int main()
{
    strong(145);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int strong()
{
    int n=145,t=n,r,i,f,sum=0;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++) f=f*i;
        sum=sum+f;
        t=t/10;
    }
    return sum==n;
}
int main()
{
    if(strong()) printf("Strong");
    else printf("Not Strong");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int strong(int n)
{
    int t=n,r,i,f,sum=0;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++) f=f*i;
        sum=sum+f;
        t=t/10;
    }
    return sum==n;
}
int main()
{
    if(strong(145)) printf("Strong");
    else printf("Not Strong");
    return 0;
}


//ASSIGNMENT 3
//Question 9


//TYPE 1:
#include <stdio.h>
void palindrome()
{
    int n=121,t,r,rev=0;
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
int main()
{
    palindrome();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void palindrome(int n)
{
    int t=n,r,rev=0;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(rev==n) printf("Palindrome");
    else printf("Not Palindrome");
}
int main()
{
    palindrome(121);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int palindrome()
{
    int n=121,t=n,r,rev=0;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    return rev==n;
}
int main()
{
    if(palindrome()) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int palindrome(int n)
{
    int t=n,r,rev=0;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    return rev==n;
}
int main()
{
    if(palindrome(121)) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}


//ASSIGNMENT 3
//Question 10


//TYPE 1:
#include <stdio.h>
void digitSum()
{
    int n=12345,t,last,first;
    last=n%10;
    t=n;
    while(t>=10)
        t=t/10;
    first=t;
    printf("Sum = %d",first+last);
}
int main()
{
    digitSum();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void digitSum(int n)
{
    int t=n,last,first;
    last=n%10;
    while(t>=10)
        t=t/10;
    first=t;
    printf("Sum = %d",first+last);
}
int main()
{
    digitSum(12345);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int digitSum()
{
    int n=12345,t=n,last,first;
    last=n%10;
    while(t>=10)
        t=t/10;
    first=t;
    return first+last;
}
int main()
{
    printf("Sum = %d",digitSum());
    return 0;
}

//TYPE 4:
#include <stdio.h>
int digitSum(int n)
{
    int t=n,last,first;
    last=n%10;
    while(t>=10)
        t=t/10;
    first=t;
    return first+last;
}
int main()
{
    printf("Sum = %d",digitSum(12345));
    return 0;
}