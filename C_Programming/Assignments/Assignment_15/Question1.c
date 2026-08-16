#include <stdio.h>

struct Book
{
    char bname[50];
    int id;
    char author[50];
    float price;
};

void main()
{
    struct Book b;

    printf("Enter Book Name: ");
    scanf("%s", b.bname);

    printf("Enter ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Name = %s", b.bname);
    printf("\nID = %d", b.id);
    printf("\nAuthor = %s", b.author);
    printf("\nPrice = %.2f", b.price);
}