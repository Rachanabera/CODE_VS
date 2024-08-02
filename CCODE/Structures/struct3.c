//struct.c using pointer
#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s;

    strcpy(s.name, "Zaid");
    s.roll = 1;
    s.cgpa = 9.5;

    struct student *ptr = &s;
    
    printf("Name: %s.\n", s.name);
    printf("Roll no.: %d.\n", s.roll);
    printf("CGPA: %.1f.\n", s.cgpa);
    
    printf("\n");

    printf("using pointer\n");
    printf("\n");
    //using pointer
    printf("Name: %s.\n", (*ptr).name);
    printf("Roll no.: %d.\n", (*ptr).roll);
    printf("CGPA: %.1f.\n", (*ptr).cgpa);
    
    return 0;
}