//2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a=-1,b=1,c,n;
    printf("Enter a number to print fibbonacci series :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d =%d\n",i,c);
        a=b;
        b=c;
    }
    
}