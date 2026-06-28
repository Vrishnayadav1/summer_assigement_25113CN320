#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i, search, found = 0;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\n===== Library Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID     : %d", b[i].id);
        printf("\nBook   : %s", b[i].name);
        printf("\nAuthor : %s\n", b[i].author);
    }

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == search)
        {
            printf("\nBook Found");
            printf("\nBook Name : %s", b[i].name);
            printf("\nAuthor    : %s\n", b[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found.");

    return 0;
}