//Write a program to calculate factorial of a number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n,s=1;
    printf("Enter a number to calculate factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s*=i;
    printf("factorial  = %d",s);
} 