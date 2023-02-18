#include <stdio.h>
#include <conio.h>
void pOdd(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    pOdd(n);
}
void pOdd(int a)
{
    if(a>0)
    {
        printf("%d\n",a*2-1);
        pOdd(a-1);
    }
        
}