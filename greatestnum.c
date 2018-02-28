//program to find thw greatest number
#include<stdio.h>
int greatest(int [],int);
int greatest(int arr[],int size)
{
int temp=arr[0];
for (int i=0;i<size-1;i++)
{
	if(arr[i]>temp)       //keeps updating the value of temp variable after condition and returns it after the interations 
	temp=arr[i];
}
return temp;
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
printf("the greatest number is :%d",greatest(Arr,Size));
return(0);
}

