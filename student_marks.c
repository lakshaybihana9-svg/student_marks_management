#include <stdio.h>

int main()
{
    char name[50];
    int english, computer, mathematics, physics, chemistry;
    int total;
    float percentage;

    printf("====================================\n");
    printf("   STUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("\nEnter student name: ");
    scanf("%49s", name);

    printf("\nEnter marks in English (out of 100): ");
    scanf("%d", &english);

    printf("Enter marks in Computer (out of 100): ");
    scanf("%d", &computer);

    printf("Enter marks in Mathematics (out of 100): ");
    scanf("%d", &mathematics);

    printf("Enter marks in Physics (out of 100): ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry (out of 100): ");
    scanf("%d", &chemistry);

    total = english + computer + mathematics + physics + chemistry;
    percentage = (total / 500.0) * 100;

    printf("\n====================================\n");
    printf("           STUDENT RESULT\n");
    printf("====================================\n");

    printf("Student Name: %s\n", name);
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    printf("====================================\n");

    return 0;
}
