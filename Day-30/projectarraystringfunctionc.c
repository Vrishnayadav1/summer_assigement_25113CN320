#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\n========== Student Records ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

int search(struct Student s[], int n, int roll)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
            return i;
    }

    return -1;
}

int main()
{
    struct Student s[100];
    int n, i, roll, index;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    index = search(s, n, roll);

    if(index != -1)
    {
        printf("\nStudent Found");
        printf("\nRoll No : %d", s[index].roll);
        printf("\nName    : %s", s[index].name);
        printf("\nMarks   : %.2f\n", s[index].marks);
    }
    else
    {
        printf("Student Not Found.\n");
    }

    return 0;
}