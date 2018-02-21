//to check whether the number is pallindrome or not
#include<stdio.h>
int main()
{
	int num,temp,reverse=0,remainder;
	printf("\n enter the number:");
	scanf("%d",&num);
	temp=num;
        while(num>0)
	{
		remainder=num%10;
		reverse=reverse*10 + remainder;
		num/=10;
	}
	
	if(temp==reverse)
		printf("\n the number is a pallindrome");
	else
		printf("\n the number is not a pallindrome");
	
	return(0);
}


