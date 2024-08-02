#include <stdio.h>
int main()
{
    
    int age = 22;
    int *p = &age;// or we can write int *p = &arr[0];
    // this is how we increment the variable's value by 1 using pointer
    printf("p = %d\n", *p);
    (*p)++;
    printf("p = %d\n", *p);

    /*
    this increments the address at
    which 22 is stored by 1 datatype
    (here it's int and since int is of
    4 byte therefore it will add 4 byte
    to address)
    */
    printf("address of age at p = %u\n", p);
    p++;//p = p + 1 -->> p = p + 4(bytes); -->> 6422296 + 4 = 6422300 so p = 6422300 
    printf("address of age at p after increment = %u\n", p);
    printf("p = %d\n", *p);//there will be a address that was just incremented by a certain value (here its 4)
    return 0;
}