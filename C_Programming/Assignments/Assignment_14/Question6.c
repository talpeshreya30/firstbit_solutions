#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

void storeValue(struct Date d)
{
    printf("\nEnter Date: ");
    scanf("%d", &d.date);

    printf("Enter Month: ");
    scanf("%d", &d.month);

    printf("Enter Year: ");
    scanf("%d", &d.year);
}

void displayValue(struct Date d)
{
    printf("\nDate = %d/%d/%d", d.date, d.month, d.year);
}

void storeArray(struct Date d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Date: ");
        scanf("%d", &d[i].date);

        printf("Enter Month: ");
        scanf("%d", &d[i].month);

        printf("Enter Year: ");
        scanf("%d", &d[i].year);
    }
}

void displayArray(struct Date d[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("\nDate = %d/%d/%d", d[i].date, d[i].month, d[i].year);
}

void storeAddress(struct Date *d)
{
    printf("\nEnter Date: ");
    scanf("%d", &d->date);

    printf("Enter Month: ");
    scanf("%d", &d->month);

    printf("Enter Year: ");
    scanf("%d", &d->year);
}

void displayAddress(struct Date *d)
{
    printf("\nDate = %d/%d/%d", d->date, d->month, d->year);
}

void main()
{
    struct Date d;
    struct Date arr[2];

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