#include <stdio.h>

int main()
{
    int n, reversednum = 0, remainder;
    
    printf("ENTER THE NUMBER TO BE REVERSED: ");
    scanf("%d", &n);
    
    while(n != 0)
    {
        
        remainder = n%10;
        reversednum = reversednum*10 + remainder;
        n /= 10;
        
    }
    
    printf("THE REVERSED NUMBER IS = %d", reversednum);
    
    return 0;
}
