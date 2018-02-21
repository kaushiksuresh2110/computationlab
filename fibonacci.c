//program the print the fibonacci series upto n
#include<stdio.h>
int main()
{
	int n,temp1,temp2,temp;
	printf("\n enter the number upto which fibonacci series should be printed");
	scanf("%d",&n);
	temp1=0;
	temp2=1;
        printf("\n %d \t %d \t",temp1,temp2);    //printing the first two values of the series
	for(int i=2;i<n;i++)
	{
		temp=0;
		temp=temp1+temp2;                //algorithm for fibonacci sequence 
		temp1=temp2;
		temp2=temp;
		printf("%d \t",temp);
	}
	
	return(0);
}

		
