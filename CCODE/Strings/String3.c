#include <stdio.h>
void main()
{
    char str[] = "Zaid Shaikh";// can NOT be reinitialized
    puts(str);
    /*
    if str = "Zaid Shaikh" is used an error will be
    show even before compiling and running the program.
    */
    char *s = "Zaid";// can be reinitialized
    puts(s);
    s = "Zaid Shaikh";
    puts(s);
}