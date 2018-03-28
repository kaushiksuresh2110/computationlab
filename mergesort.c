//c program to merge two sort functions
#include<stdio.h>
int mergesort(int [],int [], int ,int );
int mergesort(int Array1[], int Array2[],int size1,int size2)
{
int Arraynew[40];

for(int iter=0,x=0,y=0;iter<size1+size2,x<size1,y<size2;iter++)
{
	if((x<size1)&&(y<size2))
	{
		if(Array1[x]<Array2[y])
		{
		Arraynew[iter]=Array1[x];
		x++;
		}
		
		else
		{
		Arraynew[iter]=Array2[y];
		y++;
		}
	}
	
	else if((x==size1)&&(y==size2))
		break;
	else if(x==size1)
	{
		Arraynew[iter]=Array2[y];
		y++;
	}
	
	else if(y==size2)
	{
		Arraynew[iter]=Array1[x];
		x++;
	}
}

for(int iter=0;iter<size1+size2;iter++)
{
	printf("\n %d",Arraynew[iter]);
}
}

int main()
{
int Array1[20],Array2[20];
int size1,size2;
printf("\n enter the size of array1 and array2");
scanf("%d %d",&size1,&size2);
printf("\n enter the elements of array 1:");
for(int iter=0;iter<size1;iter++)
{
	scanf("%d",&Array1[iter]);
}

printf("\n enter the elements of array 2:");
for(int iter=0;iter<size2;iter++)
{
	scanf("%d",&Array2[iter]);
}			

mergesort(Array1,Array2,size1,size2);
return(0);
}



