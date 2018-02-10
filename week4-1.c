#include<stdio.h>
int main()
{
	int num=0;
	printf("enter the number:");
	scanf("%d",&num);
	if((num%2==0)&&(num%3==0))
	 printf("\n the number is divisible by both 2 and 3");
    if((num%2==0)&&(num%3!=0))
     printf("\n the number is only divisible by 2");
    if((num%2!=0)&&(num%3==0))
     printf("\n the number is only divisible by 3");
    if((num%2!=0)&&(num%3!=0))
     printf("the number is neither divisible by 2 or 3");
    return(0);

}
