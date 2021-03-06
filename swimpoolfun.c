//program to find min distance using functions
#include<stdio.h>
int printpool(int [][],int,int,char,int,int);
int printpool(int matrix[][],int row,int column,int x,int y,char dir)
{
if (dir=='n')
{
for(i=x,j=y;j>=0;j--)
{
	matrix[i][j]=1;
}
}
else if(dir=='s')
{
for(i=x,j=y;j<=row;j++)
{
	matrix[i][j]=1;
}
}
else if(dir=='e')
{
for(i=x,j=y;i>=0;i--)
{
	matrix[i][j]=1;
}
}
else if(dir=='w')
{
for(i=x,j=y;i<=column;i++)
{
	matrix[i][j]=1;
}
}


for(i=0;i<column;i++)
{	printf("\n");
	for(j=0;j<row;j++)
	{
	printf(" %d",matrix[i][j]);
	}
}

int main()
{
int matrix[10][10],i,j,k,row,col,x,y,posbl[4];
printf("\nenter the lenght and bredth of the swimming pool:");
scanf("%d %d",&row,&col);
printf("\n enter thge coordinates in which mr.K jumps:");
scanf("%d %d",&x,&y);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		matrix[i][j]=0;
	}
}
matrix[x][y]=1;
printf("\n the swimming pool is like:");
printpool(matrix,row,column,x,y);
		
int count[4];
i=1;
while(i<=4)
{
	count[i]=0;
	i++;
}

for(k=1;k<=4;k++)
{
	if (k==1) //north
	{
	for(i=x,j=y;j>0;j--)
	{
		count[k]++;
	} 
	}
	
	else if(k==2)//south
	{
	for(i=x,j=y;j<row-1;j++)
	{
		count[k]++;
	}
	}
	
	else if(k==3)//east
	{
	for(i=x,j=y;i>0;i--)
	{
		count[k]++;
	}
	}
	
	else //west
	{
	for(i=x,j=y;i<col-1;i++)
	{
		count[k]++;
	}
	}
}
int temp=count[1];
int num=0;	
for(k=1;k<=4;k++)
{
	if(count[k]<=temp)
	{
	temp=count[k];
	num++;
	}
}
		
printf("\nthe min number of steps is %d",temp);

for(int k=1;k<=4;k++)
{
	if(count[k]==temp)
	posbl[k]=k;
	else 
	posbl[k]=0;
	
}

printf("\n total no of possibilities are %d which are :",num);

for(i=1;i<=4;i++)
{
	if(posbl[i]==1)
	{
	printf("\n%d steps towards north ",count[1]);
	printpool(matrix,row,column,x,y,"n");
	}
	
	else if(posbl[i]==2)
	{
	printf("\n %d steps towards south",count[2]);
	printpool(matrix,row,column,x,y,"s");
	}
	else if(posbl[i]==3)
	{
	printf("\n %d steps towards east",count[3]);
	printpool(matrix,row,column,x,y,"e");
	}
	else if(posbl[i]==4)
	{
	printf("\n %d steps towards west",count[4]);
	printpool(matrix,row,column,x,y,"w");
	}

return(0);
}

