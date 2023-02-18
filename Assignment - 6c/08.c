//Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        if(n%i==0)
        {
            printf("Not a prime number");
            break;
        }
    if(n==1)
        printf("Not a prime number");
    else if(i==n)
        printf("Its a prime number");
}