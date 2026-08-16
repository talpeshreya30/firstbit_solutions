#include <stdio.h>

void sum(int arr[], int n)
{
    int i, s = 0;

    for(i = 0; i < n; i++)
        s = s + arr[i];

    printf("Sum = %d", s);
}

int main()
{
    int arr[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum(arr, n);

    return 0;
}