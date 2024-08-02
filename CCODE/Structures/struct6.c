#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void pup(struct student s);//printf using pointer by passing structure to a function

int main()
{
    struct student s;
    //struct student s = {"Zaid", 1, 9.5};

    strcpy(s.name, "Zaid");
    s.roll = 1;
    s.cgpa = 9.5;

    printf("Name: %s.\n", s.name);
    printf("Roll no.: %d.\n", s.roll);
    printf("CGPA: %.1f.\n", s.cgpa);
    printf("\n");
    pup(s);
    return 0;
}

void pup(struct student s)
{
    printf("print by passing structure in function\n");
    printf("Name: %s.\n", s.name);
    printf("Roll no.: %d.\n", s.roll);
    printf("CGPA: %.1f.\n", s.cgpa);
    printf("\n");
    struct student *ptr = &s;
    
    printf("print by passing structure in function then using pointer\n");
    printf("Name: %s.\n", (*ptr).name);
    printf("Roll no.: %d.\n", (*ptr).roll);
    printf("CGPA: %.1f.\n", (*ptr).cgpa);

    printf("\n");
    
    printf("print by passing structure in function then using pointer then using -> operator\n");
    printf("Name: %s.\n", ptr->name);
    printf("Roll no.: %d.\n", ptr->roll);
    printf("CGPA: %.1f.\n", ptr->cgpa);
}