#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, searchId, found = 0;

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Details -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID      : %d", emp[i].id);
        printf("\nName    : %s", emp[i].name);
        printf("\nSalary  : %.2f\n", emp[i].salary);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++)
    {
        if(emp[i].id == searchId)
        {
            printf("\nEmployee Found");
            printf("\nName   : %s", emp[i].name);
            printf("\nSalary : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found.\n");

    return 0;
}