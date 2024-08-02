//I used my brain believe me😉
// make sure there is something is the .txt file
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    // fptr = fopen("text1.txt", "r");
    // yes if this condition runs nothing after it runs (yes I was dumb when I wrote this (read line 9 again 🙄))
    if (fptr == NULL)
    {
        printf("File not found or unable to open.\n");
        return 1;
    }

    /*
    loop to print everything and specify while loop if
    we dont know how long is the content of file
    */
    
    char ch;
    while(fscanf(fptr, "%c", &ch) != EOF)
    {
        printf("Character: %c\n", ch);
    }

    /*
    if there are only numbers in the .txt file it is better to use this
    int ch;
    fscanf(fptr, "%d", &ch)
    printf("number: %d\n", ch);
    just so you know a whitespace show different number
    (1234 1 2 3, 1234 is a single number and 1, 2, 3 are
    different numbers. yes basic ass SHIT)
    */
    fclose(fptr);
    return 0;
}
/*
line 13 explanation for "it still works if we use return 0 then what is the reason to use 1 and not 0 explain"

In C, the main() function typically returns an integer value to indicate the
status of the program execution to the operating system. Conventionally,
a return value of 0 from main() indicates successful execution, while a non-zero
value typically indicates some kind of error or abnormal termination.

In the modified code snippet I provided, if the file cannot be opened successfully,
it prints an error message and then returns 1. This indicates to the operating system
that the program encountered an error during execution.

Here's why 1 is used instead of 0:

Using 0 to indicate an error would imply that the program exited successfully, which is misleading.

By using 1, it adheres to the convention that non-zero values are returned to indicate an error or abnormal termination.

So, when the program encounters an error such as failing to open the file, it returns 1, signaling to the operating system
that there was a problem during execution. This can be useful for scripting or batch processing scenarios where the calling
environment might want to take action based on the success or failure of the program.
*/