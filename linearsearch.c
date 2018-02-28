//linear search
#include<stdio.h>
int lin_search(int [],int,int);
int lin_search(int arr[],int size,int num)
{
int pos;
for(int i=0;i<size-1;i++)                   //searches element by element for the given value of the number 
{
	if(arr[i]==num)
	return(i+1);
}
}
int main()
{
int arr[30], size,num;
printf("\nenter the size of array:");
scanf("%d",&size);
printf("\nenter the array in  order:");
int i=0;
while(i<size)
{
	scanf("%d",&arr[i]);
	i++;
}
printf("\nenter the element to find");
scanf("%d",&num);
printf("element is in position :%d",lin_search(arr,size,num));
return(0);
}


