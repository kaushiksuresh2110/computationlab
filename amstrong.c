//program to check whether the number is a amstrong number
#include<stdio.h>
int power(int,int);
int length(int);
int power(int x,int z)   // to calculate the power of a number
{int product=1;
for(int i=1;i<=z;i++)
{
	product*=x;
}
return product;
}
int length(int t)        //returns the length of the number
{
int i=0;
while(t>0)
{
	t/=10;
	i++;
}
return(i);
}



int main()
{
int num,temp,rem,ams=0;
printf("\n enter a number:");
scanf("%d",&num);
int size;
size=length(num);
temp=num;
while(num>0)
{
	rem=num%10;
	ams+=power(rem,size);				//algorithm to calculate amstrong of a number 
	num/=10;
}

if(ams==temp)
	printf("\nthe number is an amstrong number");
else
	printf("\nthe number is not an amstrong number");

return(0);
}

	
