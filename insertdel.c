//program to implement insertion and deletion
#include<stdio.h>

int addition(int [],int,int,int);
int deletion(int [],int,int);

int addition(int Order[],int rank,int total,int rollno)  //function to add an element to the ranklist
{
int position;
position=rank-1;
for(int i=total-1;i>=position;i--)
{
	Order[i+1]=Order[i];                  //additon algorithm 
}
Order[position]=rollno;                       //assigning the value of new rollno to the array
total++;

for(int i=0;i<total-1;i++)
{
	printf("\n%d",Order[i]);
}
}


int deletion(int Order[],int rank,int total) //function to remove an element from the ranklist
{
int position;
position=rank-1;
for(int i=position;i<total;i++)
{
	Order[i]=Order[i+1];                //deletion algorithm
}
total--;

for(int i=0;i<total;i++)
{
	printf("\n %d",Order[i]);
}

}

void main()
{
int Order[20],rollno,rank,position,total,key=1;
printf("\nenter the total no of students");
scanf("%d",&total);
printf("\nenter the rollno of the ranks");

for(int i=0;i<total;i++)
{
	scanf("%d",&Order[i]);
}

printf("\n ente the function no \n 1.addition  2.deletion");   //choice statement
scanf("%d",&key);
	
if(key==1)
	{
	printf("\nenter the rank of student and the rollno");
	scanf("%d %d",&rank,&rollno);
	addition(Order,rank,total,rollno);                      //call to additon function
	total++;
	}
	
else if(key==2)
	{
	printf("\n enter the rank to be deleted");
	scanf("%d",&rank);
	deletion(Order,rank,total);                             //call to deletion function
	total--;
	}
	
}















 
