#include<stdio.h>
int main ()
{
int i=1;
float base_salary=1500 , bonus=200, commis_rate =0.02, gross , quantity ,price;
while(i==1)
{
printf(" \n enter the price and quantity of the product:\n");
scanf("%f %f", &price , &quantity);
gross+= base_salary+(quantity*bonus)+(quantity*price)*commis_rate;
printf("\n 1. continue=1 \n 2.quit=0 \n");
scanf("%d",&i);
}
printf("\nthe gross salary is: %f",gross);
return(0);
}

