#include <stdio.h>
#include <ctype.h>

void namaste();
void bonjour();

int main()
{
    char c;
    printf("Enter I for Indian and F for French:\n");
    scanf("%c", &c);
    if(tolower(c) == 'i')
    {
        namaste();
    }
    else if(tolower(c) == 'f')
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("Namaste.\n");
}

void bonjour()
{
    printf("Bonjour.\n");
}