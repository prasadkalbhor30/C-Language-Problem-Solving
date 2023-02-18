//Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n,s=0;
    printf("Enter a number to calculate its even numbers sum : ");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
        s+=i;
    printf("Sum of n even natural number = %d",s);
} 