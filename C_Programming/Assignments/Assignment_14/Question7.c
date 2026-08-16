#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

void storeValue(struct Time t)
{
    printf("\nEnter Hour: ");
    scanf("%d", &t.hour);

    printf("Enter Minute: ");
    scanf("%d", &t.min);

    printf("Enter Second: ");
    scanf("%d", &t.sec);
}

void displayValue(struct Time t)
{
    printf("\nTime = %d:%d:%d", t.hour, t.min, t.sec);
}

void storeArray(struct Time t[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Hour: ");
        scanf("%d", &t[i].hour);

        printf("Enter Minute: ");
        scanf("%d", &t[i].min);

        printf("Enter Second: ");
        scanf("%d", &t[i].sec);
    }
}

void displayArray(struct Time t[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("\nTime = %d:%d:%d", t[i].hour, t[i].min, t[i].sec);
}

void storeAddress(struct Time *t)
{
    printf("\nEnter Hour: ");
    scanf("%d", &t->hour);

    printf("Enter Minute: ");
    scanf("%d", &t->min);

    printf("Enter Second: ");
    scanf("%d", &t->sec);
}

void displayAddress(struct Time *t)
{
    printf("\nTime = %d:%d:%d", t->hour, t->min, t->sec);
}

void main()
{
    struct Time t;
    struct Time arr[2];

    printf("\n--- PASS BY VALUE ---\n");
    storeValue(t);
    displayValue(t);

    printf("\n\n--- PASS BY ADDRESS USING ARRAY ---\n");
    storeArray(arr, 2);
    displayArray(arr, 2);

    printf("\n\n--- PASS ONE STRUCTURE VARIABLE BY ADDRESS ---\n");
    storeAddress(&t);
    displayAddress(&t);
}