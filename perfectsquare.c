//program to print the perect square of a number 
#include<stdio.h>
int main()
{
int num,flag=0;
printf("\n enter the value of the number");
scanf("%d",&num);
for(int i=1;i<=(num/2);i++)
{
	if((i*i)==num)
		{
			printf("\n number is a perfect square");
			flag=1;
			break; 
		}
}
if(flag==0)
	printf("the number is not aperfect square");

return(0);
}


