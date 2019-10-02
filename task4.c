#include <stdio.h>

int main()
{
    char name[50];
    char surname[50];
    
    printf("ENTER YOUR NAME :\t");
    scanf("%s",name);
    
    printf("\nENTER YOUR SURNAME :\t");
    scanf("%s",surname);
    
    printf("\nYOUR FULL NAME IS : %s %s",name,surname);

    return 0;
}
