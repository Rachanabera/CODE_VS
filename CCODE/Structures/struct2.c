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
    struct student CE[10];
    int n;
    printf("Enter number of students (max 10 students):\n");
    scanf("%d", &n);
    // Consume the newline character left in the input buffer
    getchar();
    for(int i = 0; i < n; i++)
    {
        printf("Enter Student %d:\n", (i + 1));
        printf("Name:\n");
        fgets(CE[i].name, 100, stdin);
        CE[i].name[strcspn(CE[i].name, "\n")] = '\0';
        printf("Roll no.:\n");
        scanf("%d", &CE[i].roll);
        printf("CGPA:\n");
        scanf("%f", &CE[i].cgpa);
        // Consume the newline character left in the input buffer
        getchar();
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("Student %d:\n", (i + 1));
        printf(" Name: %s.\n", CE[i].name);
        printf(" Roll no.: %d.\n", CE[i].roll);
        printf(" CGPA: %.1f.\n", CE[i].cgpa);
        printf("\n");
    }
    return 0;
}