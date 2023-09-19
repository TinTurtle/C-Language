#include <stdio.h>

struct Student
{
    char name[25];
    float gpa;
};

int main()
{
    struct Student student1 = {"Alex",3.0};
    struct Student student2 = {"Amit",4.5};
    struct Student student3 = {"Amar",3.6};
    struct Student student4 = {"Akbar",2.0};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("\n%-25s\t",students[i].name);
        printf("%.2f",students[i].gpa);
    }
    
    return 0;
}