#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

int toSeconds(struct Time t)
{
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

void main()
{
    struct Time t1, t2, t3;

    printf("Enter first time\n");

    printf("Enter Hours: ");
    scanf("%d", &t1.hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t1.min);

    printf("Enter Seconds: ");
    scanf("%d", &t1.sec);

    printf("\nEnter second time\n");

    printf("Enter Hours: ");
    scanf("%d", &t2.hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t2.min);

    printf("Enter Seconds: ");
    scanf("%d", &t2.sec);

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if(t3.sec >= 60)
    {
        t3.sec = t3.sec - 60;
        t3.min++;
    }

    if(t3.min >= 60)
    {
        t3.min = t3.min - 60;
        t3.hrs++;
    }

    printf("\nResult = %d:%d:%d", t3.hrs, t3.min, t3.sec);

    printf("\nFirst Time in Seconds = %d", toSeconds(t1));
    printf("\nSecond Time in Seconds = %d", toSeconds(t2));
}