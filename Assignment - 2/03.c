#include <stdio.h>
#include <conio.h>
void main()
{
    int a,m,n;
    printf("Enter two numbers to swap :");
    scanf("%d%d",&m,&n);
    printf("m=%d and n=%d\n",m,n);
    a=m;
    m=n;
    n=a;
    printf("Numbers after swap = m=%d and n=%d",m,n);
    
}