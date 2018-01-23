#include<stdio.h>
int factorial(int);
int power(int , int );
int power(int z,int x)
{int product=1;
for(int i=1;i<=z;i++)
{product*=x;
}
return product;
}

int factorial(int t)
{int fact=1;
if (t>0)
{for(int i=1;i<=t;i++)
{fact*=i;
}
return fact;
}

else
return 1;

}
int main()
{int x,y,n,sum;
printf("\nenter the x,y and power n");
scanf("%d%d%d",&x,&y,&n);
//RHS
for (int i=0;i<=n;i++)
{sum+=factorial(n)/((factorial(i))*(factorial(n-i)));
}
//LHS
int c,p;
c=x+y;
p=power(n,c);

if(p==sum)
{
printf("\nlhs=%d rhs=%d",p,sum);
printf("verified");
}
else
{
printf("\nlhs=%d rhs=%d",p,sum);
printf("not verified");
}
}









