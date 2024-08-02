//Enter address (house no, block, city, state) of 5 people
#include <stdio.h>
#include <string.h>

typedef struct address{
    int HN;
    int B;
    char C[100];
    char S[100];
}A;

void input(int n, A addr[]);
void print(int n, A addr[]);

int main()
{
    int n;
    printf("Enter number of people:\n");
    scanf("%d", &n);
    A addr[n];//A addr[5];  
    input(n, addr); 
    return 0;
}

void input(int n, A addr[])
{
    printf("Enter House No, Block, City and State in this order for %d number of people: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &addr[i].HN);
        scanf("%d", &addr[i].B);
        scanf("%s", addr[i].C);
        scanf("%s", addr[i].S);
        if(i < n - 1)
        {
            printf("Now next person\n");
        }
    }
    print(n, addr);
}

void print(int n, A addr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("Address of person %d is House No: %d, Block: %d, City: %s, State: %s.\n", (i+1), addr[i].HN, addr[i].B, addr[i].C, addr[i].S);
    }
}