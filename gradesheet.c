//program to implement gradesheet
#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>90)
printf("S grade");
 else if (marks>80)
 printf("A grade");
  else if(marks>70)
  printf("B grade");
   else if(marks>60)
   printf("C grade");
    else if(marks>50)
    printf("D grade");
else 
printf("fail");
return(0);
}



