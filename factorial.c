//program to print the factorial
#include<stdio.h>
int factorial(int);
int factorial(int t) //function to calculate factorial
{
int fact=1;
if (t>0)
{
	for(int i=1;i<=t;i++)
	{
		fact*=i;
	}
return fact;
}
}

int main()
{
int number, factorial_value;
printf("\n enter the number:");
scanf("%d",&number);
factorial_value=factorial(number);
printf("\nthe factorial is:%d",factorial_value);
return(0);
}

