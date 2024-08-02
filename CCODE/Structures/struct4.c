//struct0.c using pointer
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
    
    //two different way to assign address of s1 to *ptr1 (struct student *ptr1 = &s1;)
    struct student *ptr1;
    ptr1 = &s1;
    struct student *ptr2 = &s2;
    struct student *ptr3 = &s3;

    printf("Name: %s.\n",s1.name);
    printf("Roll no.: %d.\n", s1.roll);
    printf("CGPA: %.1f.\n", s1.cgpa);
    printf("\n");
    printf("Name: %s.\n",s2.name);
    printf("Roll no.: %d.\n", s2.roll);
    printf("CGPA: %.1f.\n", s3.cgpa);
    printf("\n");
    printf("Name: %s.\n",s3.name);
    printf("Roll no.: %d.\n", s3.roll);
    printf("CGPA: %.1f.\n", s3.cgpa);
    printf("\n");
    
    printf("using pointer\n");
    printf("\n");
    //using pointer
    printf("Name: %s.\n", (*ptr1).name);
    printf("Roll no.: %d.\n", (*ptr1).roll);
    printf("CGPA: %.1f.\n", (*ptr1).cgpa);
    
    printf("Name: %s.\n", (*ptr2).name);
    printf("Roll no.: %d.\n", (*ptr2).roll);
    printf("CGPA: %.1f.\n", (*ptr2).cgpa);

    printf("Name: %s.\n", (*ptr3).name);
    printf("Roll no.: %d.\n", (*ptr3).roll);
    printf("CGPA: %.1f.\n", (*ptr3).cgpa);
    return 0;
}