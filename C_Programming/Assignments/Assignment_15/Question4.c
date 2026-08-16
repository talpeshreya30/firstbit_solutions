#include <stdio.h>

struct Product
{
    char name[50];
    float price;
    int quantity;
};

void main()
{
    struct Product p[10];
    int n, i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);
    }

    printf("\nCart Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName = %s", p[i].name);
        printf("\nPrice = %.2f", p[i].price);
        printf("\nQuantity = %d", p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("\n\nTotal Cost = %.2f", total);
}