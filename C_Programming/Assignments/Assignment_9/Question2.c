#include <stdio.h>

void search(int arr[], int n, int num)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");
}

int main()
{
    int arr[100], n, i, num;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    search(arr, n, num);

    return 0;
}