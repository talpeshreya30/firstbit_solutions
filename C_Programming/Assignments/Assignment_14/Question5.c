#include <stdio.h>

struct SalesManager
{
    int id;
    char name[50];
    float salary;
    float incentive;
    float target;
};

void storeValue(struct SalesManager s)
{
    printf("\nEnter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Salary: ");
    scanf("%f", &s.salary);

    printf("Enter Incentive: ");
    scanf("%f", &s.incentive);

    printf("Enter Target: ");
    scanf("%f", &s.target);
}

void displayValue(struct SalesManager s)
{
    printf("\nID = %d", s.id);
    printf("\nName = %s", s.name);
    printf("\nSalary = %.2f", s.salary);
    printf("\nIncentive = %.2f", s.incentive);
    printf("\nTarget = %.2f", s.target);
}

void storeArray(struct SalesManager s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Salary: ");
        scanf("%f", &s[i].salary);

        printf("Enter Incentive: ");
        scanf("%f", &s[i].incentive);

        printf("Enter Target: ");
        scanf("%f", &s[i].target);
    }
}

void displayArray(struct SalesManager s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", s[i].id);
        printf("\nName = %s", s[i].name);
        printf("\nSalary = %.2f", s[i].salary);
        printf("\nIncentive = %.2f", s[i].incentive);
        printf("\nTarget = %.2f\n", s[i].target);
    }
}

void storeAddress(struct SalesManager *s)
{
    printf("\nEnter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Salary: ");
    scanf("%f", &s->salary);

    printf("Enter Incentive: ");
    scanf("%f", &s->incentive);

    printf("Enter Target: ");
    scanf("%f", &s->target);
}

void displayAddress(struct SalesManager *s)
{
    printf("\nID = %d", s->id);
    printf("\nName = %s", s->name);
    printf("\nSalary = %.2f", s->salary);
    printf("\nIncentive = %.2f", s->incentive);
    printf("\nTarget = %.2f", s->target);
}

void main()
{
    struct SalesManager s;
    struct SalesManager arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(s);
    displayValue(s);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&s);
    displayAddress(&s);
}