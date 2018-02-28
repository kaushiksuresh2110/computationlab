//program to sort an array using bubblesort
#include<stdio.h>
int bubble_sort(int[],int);
int bubble_sort(int A[],int n)
{
int temp=0;
for(int i=0;i<n-1;i++)
{
                                                       
	for(int j=0;j<n-i-1;j++)                                  //bubble sort algorithm
	{							  //pushes the heaviest element to the bottom for many iterations
	if(A[j]>A[j+1])
	{
	temp=A[j];                                                //swap algorithm
	A[j]=A[j+1];
	A[j+1]=temp;
	}
	}
}
int i=0;
printf("\n the sorted array is:");
while(i<n)
	{
	printf(" %d",A[i]);
	i++;
	}
}
int main()
{
int arr[30], size;
printf("\nenter the size of array:");
scanf("%d",&size);
printf("\nenter the array:");
int i=0;
while(i<size)
{
	scanf("%d",&arr[i]);
	i++;
}
bubble_sort(arr,size);                                            //bubble sort function called
return(0);
}

	
 
