#include<stdio.h>
void main()
{
    float cel,fah;

    printf("enter the temperature in celcius");
    scanf("%f",&cel);

    fah=cel*9/5+32;

    printf("THE TEMPERATURE IN FARHANITE IS : %F",fah);


    getch();
}
