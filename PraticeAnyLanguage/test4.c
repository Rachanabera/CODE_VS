#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[5][10]={"Mumbai","Delhi","Calcutta","Chennai","Bangalore"};
    int i=0,j=0;
    char temp[10];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if((strcmp(str[i],str[j]))>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    i=0;
    printf("Sorted Strings :");
    while(i<5)
    {
        printf("\n%s",str[i]);
        i++;
    }
}