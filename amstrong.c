//program to check whether the number is a amstrong number
#include<stdio.h>
int power(int,int);
int power(int x,int z)   // to calculate the power of a number
{int product=1;
for(int i=1;i<=z;i++)
{
	product*=x;
}
return product;
}


int main()
{
int num,temp,rem,ams=0;
printf("\n enter a 3digit number  number:");
scanf("%d",&num);

temp=num;
while(num>0)
{
	rem=num%10;
	ams+=power(rem,3);				//algorithm to calculate amstrong of a number 
	num/=10;
}

if(ams==temp)
	printf("\nthe number is an amstrong number");
else
	printf("\nthe number is not an amstrong number");

return(0);
}

	
