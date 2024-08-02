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
    struct student s1 = {"Zaid", 1, 9.45};
    struct student s2 = {"Shaikh", 2, 9.3};
    struct student s3 = {"Z", 1, 9};
    
    printf(" Name: %s.\n",s1.name);
    printf(" Roll no.: %d.\n", s1.roll);
    printf(" CGPA: %.1f.\n", s1.cgpa);
    printf("\n");
    return 0;
}