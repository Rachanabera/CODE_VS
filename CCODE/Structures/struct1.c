#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s;
    printf("Enter your name:\n");
    fgets(s.name, 100, stdin);
    //scanf("%s",&s.name);
    s.name[strcspn(s.name, "\n")] = '\0';
    /*
    string Complement Span
    for replacing "\n" with '\0' so
    the the string ends and is considered
    a single string
    (improve explanation)
    */
    printf("Enter your Roll no.\n");
    scanf("%d", &s.roll);
    
    printf("Enter your CGPA\n");
    scanf("%f", &s.cgpa);
    // another way to put name in name[] using s.name strcpy(s.name, "Zaid");
    
    printf("Name: %s.\n", s.name);
    printf("Roll no.: %d.\n", s.roll);
    printf("CGPA: %.1f.\n", s.cgpa);
    return 0;
}