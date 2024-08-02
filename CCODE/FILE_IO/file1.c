#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "w");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    /*
    char ch[] = "Mango";
    int c = strlen(ch);
    for(int i = 0 ; i < c; i++) can directly write 5
    {
        fprintf(fptr, "%c", ch[i]);
    }
    */
    return 0;
}