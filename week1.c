#include<stdio.h>
#include<math.h>
int main()
{
int x,y,n,m;
printf("\nenter x and y");
scanf("%d%d" ,&x,&y);
n=pow((x+y),2);
m=(x*x+y*y+2*x*y);
if(n==m)
{
printf("\nLHS=%d",n );
printf("\nRHS=%d",m);
printf("\n hence verified");
}
else
printf("\n not verified");
return 0;
}

