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
    
    printf("Name: %s.\n", s.name);
    printf("Roll no.: %d.\n", s.roll);
    printf("CGPA: %.1f.\n", s.cgpa);
    return 0;
}