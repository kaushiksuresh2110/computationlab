#include<stdio.h>
int main()
{
	int num;
	printf("\nenter the number:");
	scanf("%d",&num);
	if((num%2==0)&&(num%3==0))  //checks whether number is divisibke by both 2 & 3
		goto ca1;               //jumps to the statement expression ca1 if the condition is satisfied
	if((num%2==0)&&(num%3!=0))  // if number is divisible by 2 only
		goto ca2;
	if((num%2!=0)&&(num%3==0))  // if number is divisible by 3 only
		goto ca3;
	if((num%2!=0)&&(num%3!=0))  // if number is neither divisible by both 
		goto ca4;
	ca1:
	{ 
		printf("\nthe number is divisible by both 2 and 3 ");
		return(0);
	}	
	ca2:
	{ 
		printf("\nThe number is divisible by 2 only ");
		return(0);
	}	
	ca3:
    {
        printf("\n the number is divisible by 3 only");
        return(0);
    }    
    ca4:
    {   
    	printf("the number is neither divisible by 2 or 3");
        return(0);
    }

    return(0);

    
}