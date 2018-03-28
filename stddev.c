//program to calculate std deviation
#include<stdio.h>
#include<math.h>
float std_dev(int [],int);
float squareroot(int);
float std_dev(int A[],int N) //function to calculate and return the standard deviation
{
int sum=0;
float variance,mean,var=0;
float stddev;
for(int i=0;i<N;i++)
{
	sum+=A[i];
}
mean=sum/N;
printf("\n %f",mean);

for(int i=0;i<N;i++)                 //program to calculate variance
{
	var=(A[i]-mean)*(A[i]-mean);
}
variance=var/N;
stddev=squareroot(variance);         //standard deviation formula, calls the squareroot function
return(stddev);
}

float squareroot(int num) //function to calculate and return square root
{
float m=0,n=0.0001;
for(m=0;;m=m+n)
{
	if((m*m)>num)
	{
		m=m-n;
		printf("\n %f",m);
		return(m);
	}
}
}


int main()
{
int A[30],num;
printf("\n enter the number of elements in the array:");
scanf("%d",&num);
printf("\n enter the array:");

for(int i=0;i<num;i++)
{
	scanf("%d",&A[i]);
}

printf("\nthe value of standard deviation is: %f",std_dev(A,num));
return(0);
}


