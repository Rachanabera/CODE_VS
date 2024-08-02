#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1, n2,*ptr;
    printf("Enter size of memory:\n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    
    printf("Enter %d numbers for that memory:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("your numbers are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    printf("Enter by how much you want to increase the memory size:\n");
    scanf("%d", &n1);

    ptr = (int*)realloc(ptr, (n+n1) * sizeof(int));
    //Always check if realloc returns NULL, indicating a failure to allocate the new memory.
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    printf("Enter remaining %d numbers:\n", n1);
    for(int i = n; i < (n+n1); i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("your total numbers after increasing memory size are:\n");
    for(int i = 0; i < (n+n1); i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("Now enter by how much you want to decrease the memory size:\n");
    scanf("%d", &n2);

    ptr = (int*)realloc(ptr, ((n+n1)-n2) * sizeof(int));
    //Always check if realloc returns NULL, indicating a failure to allocate the new memory.
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    printf("So the remaining numbers are:\n");
    for(int i = 0; i < ((n+n1)-n2); i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}