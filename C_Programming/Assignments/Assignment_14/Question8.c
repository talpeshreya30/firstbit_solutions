#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

void storeValue(struct Distance d)
{
    printf("\nEnter Feet: ");
    scanf("%d", &d.feet);

    printf("Enter Inch: ");
    scanf("%d", &d.inch);
}

void displayValue(struct Distance d)
{
    printf("\nDistance = %d feet %d inch", d.feet, d.inch);
}

void storeArray(struct Distance d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Feet: ");
        scanf("%d", &d[i].feet);

        printf("Enter Inch: ");
        scanf("%d", &d[i].inch);
    }
}

void displayArray(struct Distance d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("\nDistance = %d feet %d inch",
               d[i].feet, d[i].inch);
}

void storeAddress(struct Distance *d)
{
    printf("\nEnter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inch: ");
    scanf("%d", &d->inch);
}

void displayAddress(struct Distance *d)
{
    printf("\nDistance = %d feet %d inch",
           d->feet, d->inch);
}

void main()
{
    struct Distance d;
    struct Distance arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(d);
    displayValue(d);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&d);
    displayAddress(&d);
}