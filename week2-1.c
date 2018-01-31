//program to convert decimal to binary
#include<stdio.h>
int power(int , int );
int power(int z,int x)           //to calculate the power of a number
{int product=1;
for(int i=1;i<=z;i++)
{product*=x;
}
return product;
}
int main()
{
int bin=0,rem=0;
int num,i=0;
int temp=0;
printf("\n enter the number:");
scanf("%d",&num);
temp =num;
while(temp!=0)                     // decimal to binary conversion
{
rem=temp%2;
temp=temp/2;
bin+=power(i,10)*rem;
i++;
}
printf("%d",bin);
return(0);
}



