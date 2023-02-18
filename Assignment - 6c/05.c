//Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n;
    printf("Enter a number to calculate sum of cubes : ");
    scanf("%d",&n);
    while(n!=0)
    {
        i+=n*n*n;
        n--;
    }
    printf("Sum of n natural numbers cubes = %d",i);
} 