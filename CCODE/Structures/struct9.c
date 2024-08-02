/*
Create a structure to store vectors.
Then make a function to return sum 
of n vectors
for Complex numbers similar program
will be written
*/
#include <stdio.h>

typedef struct Vector{
    float x;
    float y;
    float z;
}V;

void input(int n, V v[]);
void sum(int n, V v[]);
void print(int n, V v[]);

int main()
{
    int n = 0;
    printf("Enter number of vectors to finds their Sum:\n");
    while(n < 2)
    {
        printf("In order to find sum there should at least two vectors.\n");
        scanf("%d", &n);
    }
    V v[n+1];
    input(n, v);
    return 0;
}

void input(int n ,V v[])
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter X coordinate then Y coordinate then Z coordinate of Vector %d:\n", (i+1));
        scanf("%f %f %f", &v[i].x, &v[i].y, &v[i].z);
    }
    sum(n, v);
}

void sum(int n, V v[])
{
    v[n].x = 0;
    v[n].y = 0;
    v[n].z = 0;
    for(int i = 0; i < n; i++)
    {
        v[n].x += v[i].x;
        v[n].y += v[i].y;
        v[n].z += v[i].z;
    }
    print(n, v);
}

void print(int n, V v[])
{
    printf("The sum of %d vectors is: %fi + %fj + %fk\n", n, v[n].x, v[n].y, v[n].z);
}