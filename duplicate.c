//program to find the duplicate element of the array
#include<stdio.h>
int duplicate(int [],int);
int duplicate(int arr[],int size)
{
int i=0;
while(i<size)
{
	if(arr[abs(arr[i])]>=0)
	{
	arr[abs(arr[i])]=-arr[abs(arr[i])];                  //abs function compares the absolute value of the element and
	i++;						     //negates the value of the absolute array
	}
							     //if the number satisfies the condition statement							
	else						     //the number is not 										
	{						     //duplicated 										
	printf("\nthe duplicate element: %d",abs(arr[i]));
	i++;
	}
}
}

int main()
{
int Arr[20],Size;
printf("\nenter the size of array:");
scanf("%d",&Size);
printf("\nenter the array:");
int i=0;
while(i<Size)
{
scanf("%d",&Arr[i]);
i++;
}
duplicate(Arr,Size);
return(0);
}






