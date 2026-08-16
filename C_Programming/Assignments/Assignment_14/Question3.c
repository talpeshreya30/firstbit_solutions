#include <stdio.h>

struct Admin
{
    int id;
    char name[50];
    float salary;
    float allowance;
};

void storeValue(struct Admin a)
{
    printf("\nEnter ID: ");
    scanf("%d", &a.id);

    printf("Enter Name: ");
    scanf("%s", a.name);

    printf("Enter Salary: ");
    scanf("%f", &a.salary);

    printf("Enter Allowance: ");
    scanf("%f", &a.allowance);
}

void displayValue(struct Admin a)
{
    printf("\nID = %d", a.id);
    printf("\nName = %s", a.name);
    printf("\nSalary = %.2f", a.salary);
    printf("\nAllowance = %.2f", a.allowance);
}

void storeArray(struct Admin a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &a[i].id);

        printf("Enter Name: ");
        scanf("%s", a[i].name);

        printf("Enter Salary: ");
        scanf("%f", &a[i].salary);

        printf("Enter Allowance: ");
        scanf("%f", &a[i].allowance);
    }
}

void displayArray(struct Admin a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", a[i].id);
        printf("\nName = %s", a[i].name);
        printf("\nSalary = %.2f", a[i].salary);
        printf("\nAllowance = %.2f\n", a[i].allowance);
    }
}

void storeAddress(struct Admin *a)
{
    printf("\nEnter ID: ");
    scanf("%d", &a->id);

    printf("Enter Name: ");
    scanf("%s", a->name);

    printf("Enter Salary: ");
    scanf("%f", &a->salary);

    printf("Enter Allowance: ");
    scanf("%f", &a->allowance);
}

void displayAddress(struct Admin *a)
{
    printf("\nID = %d", a->id);
    printf("\nName = %s", a->name);
    printf("\nSalary = %.2f", a->salary);
    printf("\nAllowance = %.2f", a->allowance);
}

void main()
{
    struct Admin a;
    struct Admin arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(a);
    displayValue(a);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&a);
    displayAddress(&a);
}