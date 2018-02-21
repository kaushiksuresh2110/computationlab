//program to print multiplication table
#include<stdio.h>
int main()
{
int num ,mul;
printf("\nenter the number: ");
scanf("%d",&num);
printf("\nmultiplication table for the number %d is: \n",num);
for(int i=1;i<=20;i++)
{
mul=i*num;
printf("\n%d * %d = %d",num,i,mul);
}
return(0);
}



