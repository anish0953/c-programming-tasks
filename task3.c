#include<stdio.h>
void main()
{
    int m,s,e,sum=0,avg=0;

     printf("enter your marks of maths :\t");
     scanf("%d",&m);

     printf("enter your marks of science :\t");
     scanf("%d",&s);

     printf("enter your marks of english :\t");
     scanf("%d",&e);

     sum=m+s+e;

     printf(" the sum is :%d \n",sum);

     avg=sum/3;

     printf(" the average marks are is :%d \n",avg);

     getch();
}
