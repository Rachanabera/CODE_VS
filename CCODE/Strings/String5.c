#include<stdio.h>
#include <string.h>
void main()
{
    char a[] = "Hello";
    char b[] = "World!";
    char c[] = "Zaid";
    strcpy(a,b);// copys b value to a irrespective to its size.
    puts(a);
    strcat(a,b);
    /*
    concatenates (appends or joins) a's values to b's
    values with out space. Also this is only possible
    when size of 'a' in big enough to store the new String
    after concatenation in a idk how (due to my lack of knowledge)
    but its is working here without specifying the size of a.
    */
    puts(a);
    printf("%d, %d, %d", strcmp(a,c), strcmp(c,a), strcmp(a,a));
    /*
    Compares 2 Strings and returns a integer value
    0 -> Strings are equal,
    +ve -> first String is > than second String (ASCII)
    -ve -> first String is < than second String (ASCII)
    */
}