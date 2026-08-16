#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void storeValue(struct Student s)
{
    printf("\nEnter Roll No: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);
}

void displayValue(struct Student s)
{
    printf("\nRoll No = %d", s.rollNo);
    printf("\nName = %s", s.name);
    printf("\nMarks = %.2f", s.marks);
}

void storeArray(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayArray(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No = %d", s[i].rollNo);
        printf("\nName = %s", s[i].name);
        printf("\nMarks = %.2f\n", s[i].marks);
    }
}

void storeAddress(struct Student *s)
{
    printf("\nEnter Roll No: ");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void displayAddress(struct Student *s)
{
    printf("\nRoll No = %d", s->rollNo);
    printf("\nName = %s", s->name);
    printf("\nMarks = %.2f", s->marks);
}

void main()
{
    struct Student s;
    struct Student arr[2];

    printf("PASS BY VALUE");
    storeValue(s);
    displayValue(s);

    printf("PASS BY ADDRESS USING ARRAY");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("PASS ONE STRUCTURE VARIABLE BY ADDRESS");
    storeAddress(&s);
    displayAddress(&s);
}