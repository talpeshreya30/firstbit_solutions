//Question 1

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


//Question 2

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


//Question 3

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


//Question 4

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


//Question 5

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


//Question 6

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


//Question 7

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