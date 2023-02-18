#include <stdio.h>
#include <conio.h>
void main()
{
    int m,n=0;
    printf("Enter a number :");
    scanf("%d",&m);
    n+=m%10;
    m/=10;
    n+=m%10;
    m/=10;
    n+=m%10;
    printf("Sum of given number digits = %d ",n);
    
}