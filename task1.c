#include<stdio.h>
void main()
{
    char a[5];
    int age,num=0;

    printf("enter your name , age and number");
    scanf("%s%d%d",&a,&age,&num);

    printf("your name is %s \n",a);

    printf("your age is %d \n",age);

    printf("your phone number is %d \n",num);

    getch();
}
