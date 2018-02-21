// to check whether the number is prime or not 
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("\nenter the number:");
	scanf("%d",&num);
	for(int i=1;i<=(num/2);i++)
	{
		if((num%i)==0)                 //divisibility condition for a number
			count++;
	}
	
	if(count>1)
		printf("\n the number is not a prime number");
	else 
		printf("\n the number is a prime number");

	return(0);
}

