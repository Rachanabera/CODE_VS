#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *) calloc(5, sizeof(float));

    // ptr[0] = 1.1;
    // ptr[1] = 1.2;
    // ptr[2] = 1.3;
    // ptr[3] = 1.4;
    // ptr[4] = 1.5;
    
    for(int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}