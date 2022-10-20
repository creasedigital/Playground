#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your age: ");

    scanf("%d", &age);

    printf("Darren is %d years old\n", age);

    double gpa;

    printf("Enter your grade point average: ");

    scanf("%lf", &gpa);

    printf("Your current grade is %f\n ", gpa);

    char name[20];

    printf("Enter your name: ");

    scanf("%s", name);

    printf("Your name is %s\n ", name);

    char fname[20];

    printf("Enter your first name: ");

    fgets(fname, 20, stdin);

    printf("Your name is %s\n ", name);

    return (0);
}