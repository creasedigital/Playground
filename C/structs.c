#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char course[50];
    int age;
    double gpa;
};

int main()
{
     struct Student student1;
     strcpy(student1.name, "John Thomas");
     strcpy(student1.course, "Biology");
     student1.age = 22;
     student1.gpa = 3.92;

     struct Student student2;
     strcpy(student2.name, "Ojo Thomas");
     strcpy(student2.course, "Agricultural Science");
     student2.age = 22;
     student2.gpa = 3.92;

     printf("%s\n", student1.name);

     printf("%s\n", student2.name);

     printf("%s\n", student2.course);

    return (0);
}
