#include <stdio.h>

struct HR
{
    int id;
    char name[50];
    float salary;
    float commission;
};

void storeValue(struct HR h)
{
    printf("\nEnter ID: ");
    scanf("%d", &h.id);

    printf("Enter Name: ");
    scanf("%s", h.name);

    printf("Enter Salary: ");
    scanf("%f", &h.salary);

    printf("Enter Commission: ");
    scanf("%f", &h.commission);
}

void displayValue(struct HR h)
{
    printf("\nID = %d", h.id);
    printf("\nName = %s", h.name);
    printf("\nSalary = %.2f", h.salary);
    printf("\nCommission = %.2f", h.commission);
}

void storeArray(struct HR h[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &h[i].id);

        printf("Enter Name: ");
        scanf("%s", h[i].name);

        printf("Enter Salary: ");
        scanf("%f", &h[i].salary);

        printf("Enter Commission: ");
        scanf("%f", &h[i].commission);
    }
}

void displayArray(struct HR h[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", h[i].id);
        printf("\nName = %s", h[i].name);
        printf("\nSalary = %.2f", h[i].salary);
        printf("\nCommission = %.2f\n", h[i].commission);
    }
}

void storeAddress(struct HR *h)
{
    printf("\nEnter ID: ");
    scanf("%d", &h->id);

    printf("Enter Name: ");
    scanf("%s", h->name);

    printf("Enter Salary: ");
    scanf("%f", &h->salary);

    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}

void displayAddress(struct HR *h)
{
    printf("\nID = %d", h->id);
    printf("\nName = %s", h->name);
    printf("\nSalary = %.2f", h->salary);
    printf("\nCommission = %.2f", h->commission);
}

void main()
{
    struct HR h;
    struct HR arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(h);
    displayValue(h);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&h);
    displayAddress(&h);
}