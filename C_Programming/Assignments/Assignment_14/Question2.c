#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void storeValue(struct Employee e)
{
    printf("\nEnter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);
}

void displayValue(struct Employee e)
{
    printf("\nID = %d", e.id);
    printf("\nName = %s", e.name);
    printf("\nSalary = %.2f", e.salary);
}

void storeArray(struct Employee e[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void displayArray(struct Employee e[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", e[i].id);
        printf("\nName = %s", e[i].name);
        printf("\nSalary = %.2f\n", e[i].salary);
    }
}

void storeAddress(struct Employee *e)
{
    printf("\nEnter ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf("%s", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void displayAddress(struct Employee *e)
{
    printf("\nID = %d", e->id);
    printf("\nName = %s", e->name);
    printf("\nSalary = %.2f", e->salary);
}

void main()
{
    struct Employee e;
    struct Employee arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(e);
    displayValue(e);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&e);
    displayAddress(&e);
}