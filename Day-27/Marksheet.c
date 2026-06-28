#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 5 Subjects:\n");
    scanf("%d%d%d%d%d",
          &s.m1,
          &s.m2,
          &s.m3,
          &s.m4,
          &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5.0;

    printf("\n========== MARKSHEET ==========\n");

    printf("Roll No     : %d\n", s.roll);
    printf("Name        : %s\n", s.name);

    printf("\nSubject 1 : %d", s.m1);
    printf("\nSubject 2 : %d", s.m2);
    printf("\nSubject 3 : %d", s.m3);
    printf("\nSubject 4 : %d", s.m4);
    printf("\nSubject 5 : %d", s.m5);

    printf("\n\nTotal      : %d", s.total);
    printf("\nPercentage : %.2f%%\n", s.percentage);

    if(s.percentage >= 90)
        printf("Grade : A+\n");
    else if(s.percentage >= 75)
        printf("Grade : A\n");
    else if(s.percentage >= 60)
        printf("Grade : B\n");
    else if(s.percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}