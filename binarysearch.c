//program to search an element using binary search
#include<stdio.h>
int bin_search(int [],int,int);
int bin_search(int arr[],int size,int number)
{
int low=0;int high, mid;
high=size-1;
while(low<=high)
{
	mid=low+(high-low)/2;                           //if the number to be searched is greater or less than the middle elements value 
	if(arr[mid]==number)
	return (mid+1);					//the function increments or decrements the value of low and high respectively
	else if(arr[mid]>number)                        //then returns the value of mid after iterations
	high=mid-1;
	else
	low=mid+1;
}
}

int main()
{
int arr[30], size,num;
printf("\nenter the size of array:");
scanf("%d",&size);
printf("\nenter the array in ascending order:");
int i=0;
while(i<size)
{
	scanf("%d",&arr[i]);
	i++;
}
printf("\nenter the element to find");
scanf("%d",&num);
printf("element is in position :%d",bin_search(arr,size,num));
return(0);
}
