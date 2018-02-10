//program to check the divisibility of a number 
#include<stdio.h>
int main()
{
	int num;
	printf("\nenter the number:");
	scanf("%d",&num);
	((num%2==0)&&(num%3==0))?printf("\nThe number is divisible by both 2 and 3") /*the conditional operator checks the divisibility of a number with both 2 &3 */
	:((num%2==0)&&(num%3!=0))?printf("\n The  number is divisible by 2 only ") /*tests whether number is divisible by 2 */
	:((num%2!=0)&&(num%3==0))?printf("\nThe number is divisible by 3 only") //tests whether number is divisible ny 3
	:printf("\n The number is neither divisible by 2 or 3");               //this statement is executed when all the statements are not called
	

return(0);
    
}