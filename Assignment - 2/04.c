#include <stdio.h>
#include <conio.h>
void main()
{
    int m,n;
    printf("Enter two numbers to swap :");
    scanf("%d%d",&m,&n);
    printf("m=%d and n=%d\n",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("Numbers after swap = m=%d and n=%d",m,n);
    
}