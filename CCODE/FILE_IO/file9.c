// write 1 2 in .txt file (output in .txt file bro🙄)
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen ("text.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen ("text.txt", "a");
    fprintf(fptr, "\nSum is %d", a + b);
    fclose(fptr);
    return 0;
}