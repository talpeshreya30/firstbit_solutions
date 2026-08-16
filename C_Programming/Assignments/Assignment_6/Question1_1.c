//ASSIGNMENT 1 
//Question 1

//TYPE 1: 
#include <stdio.h>
void check()
{
    int n = 10;
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main()
{
    check();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void check(int n)
{
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
int main()
{
    check(10);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int check()
{
    int n = 10;
    return n % 2;
}
int main()
{
    int r = check();
    if(r == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int check(int n)
{
    return n % 2;
}
int main()
{
    int r = check(10);
    if(r == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}


//Question 2

//TYPE 1:
#include <stdio.h>
void palindrome()
{
    int n = 121, t, r, rev = 0;
    t = n;
    while(t > 0)
    {
        r = t % 10;
        rev = rev * 10 + r;
        t = t / 10;
    }
    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
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
    int t, r, rev = 0;
    t = n;
    while(t > 0)
    {
        r = t % 10;
        rev = rev * 10 + r;
        t = t / 10;
    }
    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
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
    int n = 121, t, r, rev = 0;
    t = n;
    while(t > 0)
    {
        r = t % 10;
        rev = rev * 10 + r;
        t = t / 10;
    }
    return rev == n;
}
int main()
{
    if(palindrome())
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int palindrome(int n)
{
    int t, r, rev = 0;
    t = n;
    while(t > 0)
    {
        r = t % 10;
        rev = rev * 10 + r;
        t = t / 10;
    }
    return rev == n;
}
int main()
{
    if(palindrome(121))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}


//Question 3

//TYPE 1:
#include <stdio.h>
void leap()
{
    int year = 2024;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}
int main()
{
    leap();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void leap(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}
int main()
{
    leap(2024);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int leap()
{
    int year = 2024;
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int main()
{
    if(leap())
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int leap(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int main()
{
    if(leap(2024))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}


//Question 4

//TYPE 1:
#include <stdio.h>
void check()
{
    char ch = 'a';
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}
int main()
{
    check();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void check(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}
int main()
{
    check('a');
    return 0;
}

//TYPE 3:
#include <stdio.h>
int check()
{
    char ch = 'a';
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
int main()
{
    if(check())
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int check(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
int main()
{
    if(check('a'))
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}


//Question 5

//TYPE 1:
#include <stdio.h>
void vote()
{
    int age = 20;
    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}
int main()
{
    vote();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void vote(int age)
{
    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}
int main()
{
    vote(20);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int vote()
{
    int age = 20;
    return age >= 18;
}
int main()
{
    if(vote())
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int vote(int age)
{
    return age >= 18;
}
int main()
{
    if(vote(20))
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
    return 0;
}


//Question 6

//TYPE 1:
#include <stdio.h>
void check()
{
    char ch = 'A';
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an alphabet");
}
int main()
{
    check();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void check(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an alphabet");
}
int main()
{
    check('A');
    return 0;
}

//TYPE 3:
#include <stdio.h>
int check()
{
    char ch = 'A';
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}
int main()
{
    int r = check();
    if(r == 1)
        printf("Uppercase");
    else if(r == 2)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int check(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}
int main()
{
    int r = check('A');
    if(r == 1)
        printf("Uppercase");
    else if(r == 2)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}


//Question 7

//TYPE 1:
#include <stdio.h>
void salary()
{
    float basic = 5000, da, ta, hra, total;
    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }
    total = basic + da + ta + hra;
    printf("Total Salary = %.2f", total);
}
int main()
{
    salary();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void salary(float basic)
{
    float da, ta, hra, total;
    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }
    total = basic + da + ta + hra;
    printf("Total Salary = %.2f", total);
}
int main()
{
    salary(5000);
    return 0;
}

//TYPE 3:
#include <stdio.h>
float salary()
{
    float basic = 5000, da, ta, hra;
    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }
    return basic + da + ta + hra;
}
int main()
{
    printf("Total Salary = %.2f", salary());
    return 0;
}

//TYPE 4:
#include <stdio.h>
float salary(float basic)
{
    float da, ta, hra;
    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }
    return basic + da + ta + hra;
}
int main()
{
    printf("Total Salary = %.2f", salary(5000));
    return 0;
}