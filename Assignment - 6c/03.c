//Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n,s=0;
    printf("Enter a number to calculate its odd numbers sum : ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i+=2)
        s+=i;
    printf("Sum of n odd natural number = %d",s);
} 