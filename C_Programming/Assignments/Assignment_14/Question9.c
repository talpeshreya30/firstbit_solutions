#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

void storeValue(struct Complex c)
{
    printf("\nEnter Real: ");
    scanf("%f", &c.real);

    printf("Enter Imaginary: ");
    scanf("%f", &c.imaginary);
}

void displayValue(struct Complex c)
{
    printf("\nComplex = %.2f + %.2fi",
           c.real, c.imaginary);
}

void storeArray(struct Complex c[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Real: ");
        scanf("%f", &c[i].real);

        printf("Enter Imaginary: ");
        scanf("%f", &c[i].imaginary);
    }
}

void displayArray(struct Complex c[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("\nComplex = %.2f + %.2fi",
               c[i].real, c[i].imaginary);
}

void storeAddress(struct Complex *c)
{
    printf("\nEnter Real: ");
    scanf("%f", &c->real);

    printf("Enter Imaginary: ");
    scanf("%f", &c->imaginary);
}

void displayAddress(struct Complex *c)
{
    printf("\nComplex = %.2f + %.2fi",
           c->real, c->imaginary);
}

void main()
{
    struct Complex c;
    struct Complex arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(c);
    displayValue(c);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&c);
    displayAddress(&c);
}