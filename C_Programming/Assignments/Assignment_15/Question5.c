#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[50];
};

void main()
{
    struct Movie m[10];
    int n = 0;
    int choice, i;
    char search[50];

    do
    {
        printf("\n\n1. Add Movie");
        printf("\n2. Search Movie");
        printf("\n3. Update Movie");
        printf("\n4. Display Movies");
        printf("\n5. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nEnter Title: ");
            scanf("%s", m[n].title);

            printf("Enter Director: ");
            scanf("%s", m[n].director);

            printf("Enter Release Year: ");
            scanf("%d", &m[n].year);

            printf("Enter Genre: ");
            scanf("%s", m[n].genre);

            n++;

            printf("\nMovie Added Successfully");
        }
        else if(choice == 2)
        {
            printf("\nEnter Movie Title: ");
            scanf("%s", search);

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, search) == 0)
                {
                    printf("\nTitle = %s", m[i].title);
                    printf("\nDirector = %s", m[i].director);
                    printf("\nYear = %d", m[i].year);
                    printf("\nGenre = %s", m[i].genre);
                }
            }
        }
        else if(choice == 3)
        {
            printf("\nEnter Movie Title to Update: ");
            scanf("%s", search);

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, search) == 0)
                {
                    printf("Enter New Director: ");
                    scanf("%s", m[i].director);

                    printf("Enter New Release Year: ");
                    scanf("%d", &m[i].year);

                    printf("Enter New Genre: ");
                    scanf("%s", m[i].genre);

                    printf("\nMovie Updated Successfully");
                }
            }
        }
        else if(choice == 4)
        {
            for(i = 0; i < n; i++)
            {
                printf("\nTitle = %s", m[i].title);
                printf("\nDirector = %s", m[i].director);
                printf("\nYear = %d", m[i].year);
                printf("\nGenre = %s\n", m[i].genre);
            }
        }

    } while(choice != 5);
}