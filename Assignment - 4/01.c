//1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a=-1,b=1,c,n;
    printf("Enter a number to print nth term of fibbonacci series :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("nth term =%d",c);
}