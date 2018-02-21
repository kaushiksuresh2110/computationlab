//to convert binary number to decimal 
#include<stdio.h>
int power(int , int );
int length(int);
int power(int z,int x)   // to calculate the power of a number
{int product=1;
for(int i=1;i<=z;i++)
{product*=x;
}
return product;
}
int length(int t)        //returns the length of the number
{
int flag=0;
int i=0;
int temp;
temp=t;
while(flag!=1)
{
temp=t/power(i,10);
if (temp>=1)
i++;
else
flag=1;
}
return(i);
}


int main()
{
int a[20],num;
int bin,size;
printf("\n enter the binary number");
scanf("%d",&bin);
size=length(bin);
int temp1 ,temp2;
temp1=bin;
for(int i=(size-1);i>=0;i--)        
{
temp2=temp1/(power(i,10));         //divides by highest degree term to return the binary digit of i'th term
a[i]=temp2;
if(temp2>=1)
{temp1=temp1-power(i,10);          // removes the highest digit binary 
num+=a[i]*power(i,2);              //calculates the value of the decimal number
if(temp1==0)
{
	i=-1;
}
}
else 
{a[i]=0;
 continue;
}
}
printf("\n number is: %d",num);
return(0);
}
 
