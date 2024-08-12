#include <stdio.h>
#include <math.h>
void main()
{
 int n, n0=0, i, c=0, t=0, sum=0;
 printf("Enter a number to check if Armstrong or not:\n");
 scanf("%d",&n);
 n0 = n;
 while(n0 > 0)
 {
  n0 = n0 / 10;
  c++;
 }
 n0 = n;
 for(i = 0; i < c; i++)
 {
  t = n0 % 10;
  printf("t: %d\n",t);
  n0 = n0 / 10;
  printf("n0: %d\n",n0);
  printf("%f\n",pow(t, c));
  sum = sum + pow(t, c);
  printf("sum: %d\n",sum);
 }
 if(n == sum)
 {
  printf("Your number is an Armstrong number.\n");
 }
 else
 {
  printf("Your number is not an Armstrong number.\n");
 }
}