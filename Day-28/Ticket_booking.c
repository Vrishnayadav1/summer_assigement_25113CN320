#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int book, choice;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &book);

                if(book <= totalSeats)
                {
                    totalSeats -= book;
                    printf("Booking Successful.\n");
                    printf("Remaining Seats = %d\n", totalSeats);
                }
                else
                {
                    printf("Seats Not Available.\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n", totalSeats);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}