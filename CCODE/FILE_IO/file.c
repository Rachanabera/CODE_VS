#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("New_text.txt","r");
    if(fptr == NULL)
    {
        printf("file doesn't exist.\n");
    }
    else
    {
        fclose(fptr);
    }
    fptr = fopen("Text.txt", "w");
    fclose(fptr);
    return 0;
}