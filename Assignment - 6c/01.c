//Write a program to calculate sum of first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n;
    printf("Enter a number to calculate its sum : ");
    scanf("%d",&n);
    while(n!=0)
    {
        i+=n;
        n--;
    }
    printf("Sum of n natural number = %d",i);
}