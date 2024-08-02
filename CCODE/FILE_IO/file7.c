#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen ("Student.txt", "w");
    
    char name[100];
    int age;
    float cgpa;

    printf("Enter Student's name:\n");
    scanf("%s", &name);
    printf("Enter age of student:\n");
    scanf("%d", &age);
    printf("Enter CGPA of student:\n");
    scanf("%f", &cgpa);
    
    fprintf(fptr, "Student name: %s\n", name);
    fprintf(fptr, "Student age: %d\n", age);
    fprintf(fptr, "Student cgpa: %f", cgpa);

    fclose(fptr);
    return 0;
}