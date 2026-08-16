//ASSIGNMENT 2
//Question 1


//TYPE 1:
#include <stdio.h>
void calculate()
{
    float a=10, b=5, result;
    char op='+';

    if(op=='+') result=a+b;
    else if(op=='-') result=a-b;
    else if(op=='*') result=a*b;
    else if(op=='/') result=a/b;
    else if(op=='%') printf("Modulo is for integers");
    else { printf("Invalid operator"); return; }

    printf("Result = %.2f", result);
}
int main()
{
    calculate();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void calculate(int a, int b, char op)
{
    if(op=='+') printf("Result = %d", a+b);
    else if(op=='-') printf("Result = %d", a-b);
    else if(op=='*') printf("Result = %d", a*b);
    else if(op=='/' && b!=0) printf("Result = %d", a/b);
    else if(op=='%' && b!=0) printf("Result = %d", a%b);
    else printf("Invalid operation");
}
int main()
{
    calculate(10, 5, '+');
    return 0;
}

//TYPE 3:
#include <stdio.h>
int calculate()
{
    int a=10, b=5;
    char op='+';
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else if(op=='/') return a/b;
    else return a%b;
}
int main()
{
    printf("Result = %d", calculate());
    return 0;
}

//TYPE 4:
#include <stdio.h>
int calculate(int a, int b, char op)
{
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else if(op=='/' && b!=0) return a/b;
    else if(op=='%' && b!=0) return a%b;
    return 0;
}
int main()
{
    printf("Result = %d", calculate(10, 5, '+'));
    return 0;
}


//ASSIGNMENT 2
//Question 2


//TYPE 1:
#include <stdio.h>
void triangle()
{
    int a=5, b=5, c=5;
    if(a==b && b==c) printf("Equilateral");
    else if(a==b || b==c || a==c) printf("Isosceles");
    else printf("Scalene");
}
int main()
{
    triangle();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void triangle(int a, int b, int c)
{
    if(a==b && b==c) printf("Equilateral");
    else if(a==b || b==c || a==c) printf("Isosceles");
    else printf("Scalene");
}
int main()
{
    triangle(5, 5, 5);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int triangle()
{
    int a=5, b=5, c=5;
    if(a==b && b==c) return 1;
    else if(a==b || b==c || a==c) return 2;
    return 3;
}
int main()
{
    int r=triangle();
    if(r==1) printf("Equilateral");
    else if(r==2) printf("Isosceles");
    else printf("Scalene");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int triangle(int a, int b, int c)
{
    if(a==b && b==c) return 1;
    else if(a==b || b==c || a==c) return 2;
    return 3;
}
int main()
{
    int r=triangle(5,5,5);
    if(r==1) printf("Equilateral");
    else if(r==2) printf("Isosceles");
    else printf("Scalene");
    return 0;
}


//ASSIGNMENT 2
//Question 3


//TYPE 1:
#include <stdio.h>
void greatest()
{
    int a=10,b=25,c=15;
    if(a>b)
    {
        if(a>c) printf("%d",a);
        else printf("%d",c);
    }
    else
    {
        if(b>c) printf("%d",b);
        else printf("%d",c);
    }
}
int main()
{
    greatest();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void greatest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c) printf("%d",a);
        else printf("%d",c);
    }
    else
    {
        if(b>c) printf("%d",b);
        else printf("%d",c);
    }
}
int main()
{
    greatest(10,25,15);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int greatest()
{
    int a=10,b=25,c=15;
    if(a>b)
    {
        if(a>c) return a;
        else return c;
    }
    else
    {
        if(b>c) return b;
        else return c;
    }
}
int main()
{
    printf("Greatest = %d",greatest());
    return 0;
}

//TYPE 4:
#include <stdio.h>
int greatest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c) return a;
        else return c;
    }
    else
    {
        if(b>c) return b;
        else return c;
    }
}
int main()
{
    printf("Greatest = %d",greatest(10,25,15));
    return 0;
}


//ASSIGNMENT 2
//Question 4


//TYPE 1:
#include <stdio.h>
void result()
{
    int marks=78;
    if(marks>75) printf("Distinction");
    else if(marks>65) printf("First Class");
    else if(marks>55) printf("Second Class");
    else if(marks>=40) printf("Pass Class");
    else printf("Fail");
}
int main()
{
    result();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void result(int marks)
{
    if(marks>75) printf("Distinction");
    else if(marks>65) printf("First Class");
    else if(marks>55) printf("Second Class");
    else if(marks>=40) printf("Pass Class");
    else printf("Fail");
}
int main()
{
    result(78);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int result()
{
    int marks=78;
    if(marks>75) return 1;
    else if(marks>65) return 2;
    else if(marks>55) return 3;
    else if(marks>=40) return 4;
    return 5;
}
int main()
{
    int r=result();
    if(r==1) printf("Distinction");
    else if(r==2) printf("First Class");
    else if(r==3) printf("Second Class");
    else if(r==4) printf("Pass Class");
    else printf("Fail");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int result(int marks)
{
    if(marks>75) return 1;
    else if(marks>65) return 2;
    else if(marks>55) return 3;
    else if(marks>=40) return 4;
    return 5;
}
int main()
{
    int r=result(78);
    if(r==1) printf("Distinction");
    else if(r==2) printf("First Class");
    else if(r==3) printf("Second Class");
    else if(r==4) printf("Pass Class");
    else printf("Fail");
    return 0;
}


//ASSIGNMENT 2
//Question 5


//TYPE 1:
#include <stdio.h>
void discount()
{
    float price=700, d;
    char student='y';

    if(student=='y' && price>500) d=price*20/100;
    else if(student=='y') d=price*10/100;
    else if(student=='n' && price>600) d=price*15/100;
    else d=0;

    printf("Discount = %.2f",d);
}
int main()
{
    discount();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void discount(float price,char student)
{
    float d;
    if(student=='y' && price>500) d=price*20/100;
    else if(student=='y') d=price*10/100;
    else if(student=='n' && price>600) d=price*15/100;
    else d=0;
    printf("Discount = %.2f",d);
}
int main()
{
    discount(700,'y');
    return 0;
}

//TYPE 3:
#include <stdio.h>
float discount()
{
    float price=700;
    char student='y';
    if(student=='y' && price>500) return price*20/100;
    else if(student=='y') return price*10/100;
    else if(student=='n' && price>600) return price*15/100;
    return 0;
}
int main()
{
    printf("Discount = %.2f",discount());
    return 0;
}

//TYPE 4:
#include <stdio.h>
float discount(float price,char student)
{
    if(student=='y' && price>500) return price*20/100;
    else if(student=='y') return price*10/100;
    else if(student=='n' && price>600) return price*15/100;
    return 0;
}
int main()
{
    printf("Discount = %.2f",discount(700,'y'));
    return 0;
}


//ASSIGNMENT 2
//Question 6


//TYPE 1:
#include <stdio.h>
void divisible()
{
    int n=15;
    if(n%3==0 && n%5==0) printf("Divisible by both");
    else if(n%3==0) printf("Divisible by 3 but not by 5");
    else if(n%5==0) printf("Divisible by 5 but not by 3");
    else printf("Divisible by None");
}
int main()
{
    divisible();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void divisible(int n)
{
    if(n%3==0 && n%5==0) printf("Divisible by both");
    else if(n%3==0) printf("Divisible by 3 but not by 5");
    else if(n%5==0) printf("Divisible by 5 but not by 3");
    else printf("Divisible by None");
}
int main()
{
    divisible(15);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int divisible()
{
    int n=15;
    if(n%3==0 && n%5==0) return 1;
    else if(n%3==0) return 2;
    else if(n%5==0) return 3;
    return 4;
}
int main()
{
    int r=divisible();
    if(r==1) printf("Divisible by both");
    else if(r==2) printf("Divisible by 3 but not by 5");
    else if(r==3) printf("Divisible by 5 but not by 3");
    else printf("Divisible by None");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int divisible(int n)
{
    if(n%3==0 && n%5==0) return 1;
    else if(n%3==0) return 2;
    else if(n%5==0) return 3;
    return 4;
}
int main()
{
    int r=divisible(15);
    if(r==1) printf("Divisible by both");
    else if(r==2) printf("Divisible by 3 but not by 5");
    else if(r==3) printf("Divisible by 5 but not by 3");
    else printf("Divisible by None");
    return 0;
}


//ASSIGNMENT 2
//Question 7


//TYPE 1:
#include <stdio.h>
void ageCategory()
{
    int age=20;
    if(age<12) printf("Child");
    else if(age<=19) printf("Teenager");
    else if(age<=59) printf("Adult");
    else printf("Senior");
}
int main()
{
    ageCategory();
    return 0;
}

//TYPE 2:
#include <stdio.h>
void ageCategory(int age)
{
    if(age<12) printf("Child");
    else if(age<=19) printf("Teenager");
    else if(age<=59) printf("Adult");
    else printf("Senior");
}
int main()
{
    ageCategory(20);
    return 0;
}

//TYPE 3:
#include <stdio.h>
int ageCategory()
{
    int age=20;
    if(age<12) return 1;
    else if(age<=19) return 2;
    else if(age<=59) return 3;
    return 4;
}
int main()
{
    int r=ageCategory();
    if(r==1) printf("Child");
    else if(r==2) printf("Teenager");
    else if(r==3) printf("Adult");
    else printf("Senior");
    return 0;
}

//TYPE 4:
#include <stdio.h>
int ageCategory(int age)
{
    if(age<12) return 1;
    else if(age<=19) return 2;
    else if(age<=59) return 3;
    return 4;
}
int main()
{
    int r=ageCategory(20);
    if(r==1) printf("Child");
    else if(r==2) printf("Teenager");
    else if(r==3) printf("Adult");
    else printf("Senior");
    return 0;
}