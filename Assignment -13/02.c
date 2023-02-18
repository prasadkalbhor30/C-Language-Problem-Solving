#include <stdio.h>
#include <conio.h>
int pOdd(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("sum of odd numbers =%d",pOdd(n));
}
int pOdd(int a)
{
    if(a==1)
        return 1;
    return a*2-1+pOdd(a-1);
        
}  