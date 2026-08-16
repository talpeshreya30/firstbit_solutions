#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void storeValue(struct Product p)
{
    printf("\nEnter ID: ");
    scanf("%d", &p.id);

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);
}

void displayValue(struct Product p)
{
    printf("\nID = %d", p.id);
    printf("\nName = %s", p.name);
    printf("\nQuantity = %d", p.quantity);
    printf("\nPrice = %.2f", p.price);
}

void storeArray(struct Product p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }
}

void displayArray(struct Product p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", p[i].id);
        printf("\nName = %s", p[i].name);
        printf("\nQuantity = %d", p[i].quantity);
        printf("\nPrice = %.2f\n", p[i].price);
    }
}

void storeAddress(struct Product *p)
{
    printf("\nEnter ID: ");
    scanf("%d", &p->id);

    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);
}

void displayAddress(struct Product *p)
{
    printf("\nID = %d", p->id);
    printf("\nName = %s", p->name);
    printf("\nQuantity = %d", p->quantity);
    printf("\nPrice = %.2f", p->price);
}

void main()
{
    struct Product p;
    struct Product arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(p);
    displayValue(p);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&p);
    displayAddress(&p);
}