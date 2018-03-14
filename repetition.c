//printing the numbe rof times the element has repeated 
#include<stdio.h>
int main()
{
int matrix[10][10],row,col,count[10],i,j;
printf("\n enter the no fo rows and columns:");
scanf("%d %d",&row,&col);
printf("\n enter the matrix:");

for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&matrix[i][j]);
	}
}

for(i=0;i<8;i++)
{
	count[i]=0;
}

printf("\n the matrix is:");
for(i=0;i<row;i++)
{	printf("\n");
	for(j=0;j<col;j++)
	{
		printf(" %d",matrix[i][j]);
	}
}

for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		count[matrix[i][j]]++;
	}
}

for(int i=0;i<8;i++)
{
printf("\nthe number of %d in the matrix is: %d",i,count[i]);
}
return(0);
}

		

