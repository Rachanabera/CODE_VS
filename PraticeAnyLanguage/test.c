#include<stdio.h>
int main()
{ int a=5,b=3;
int c,e,k,g,h;
c=a/b;
printf("Value of c=%d\n",c);
e=a%b;
printf("Value of e=%d\n",e);
k=a<<2;
printf("Value of k=%d\n",k);
g=b>>2;
printf("Value of g=%d\n",g);
h=++a+ b--;
printf("Value of h=%d\n",h);
return 0;
}