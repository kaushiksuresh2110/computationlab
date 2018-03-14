//program to perform matrix multiplication
#include<stdio.h>
int main()
{
int row1,row2,col1,col2,sum=0,matrix1[3][3],matrix2[3][3],prod[3][3],i,j;
printf("\n enter the no of rows and columns of matrix1");
scanf("%d %d",&row1,&col1);
printf("\nenter the first matrix:");
for(i=0;i<row1;i++)
{
	for(j=0;j<col1;j++)
	{
		scanf("%d",&matrix1[i][j]);
	}
}

printf("\n enter the no of rows and columns of matrix2");
scanf("%d %d",&row2,&col2);
printf("\nenter the second matrix:");
for(i=0;i<row2;i++)
{
	for(j=0;j<col2;j++)
	{
		scanf("%d",&matrix2[i][j]);
	}
}
if(col1==row2)
{
for(i=0;i<row1;i++)
{
	for(j=0;j<col2;j++)
	{
		for(int k=0;k<col1;k++)
		{
			sum+=matrix1[i][k]*matrix2[k][j];
		}
	prod[i][j]=sum;
	sum=0;
	}
}
}
else
printf("\n the matrixs are not multipliable");

printf("\n the product matrix is:");
for(i=0;i<row1;i++)
{	printf("\n");
	for(j=0;j<col2;j++)
	{
		printf(" %d",prod[i][j]);
	}
}
return(0);
}


