#include<stdio.h>
int main()
{
	int num,x;
	printf("\nEnter the number:");
	scanf("%d",&num);
	if((num%2==0)&&(num%3==0)) //the divisibility test for a number with 2 and 3
		x=1;                   //the variable x is assigned with number 1 if the above condition is satisfied
    if ((num%2==0)&&(num%3!=0)) //divisibility test with 2
    	x=2;                   
    if ((num%2!=0)&&(num%3==0))
    	x=3;
    if ((num%2!=0)&&(num%3!=0))
    	x=4;
    switch(x)
    {
    	case 1: printf("\n the number is divisible by both 2 and 3" );
    	        break;
    	case 2: printf("\n the number is only divisible by 2");
    	        break;
    	case 3: printf("\n the number is only divisible by 3");
    	        break;
    	case 4: printf("the number is neither divisible by 2 or 3");
    	        break;
    	default: break;                
    }
    return(0);

}
