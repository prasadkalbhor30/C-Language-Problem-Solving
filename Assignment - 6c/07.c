//Write a program to count digits in a given number
#include <stdio.h>
#include <conio.h>
void main()
{
    long long int i,n,c=0;
    printf("Enter a number to count its digits : ");
    scanf("%lld",&n);
    for(i=0;n!=0;i++)
        n/=10;
    printf("Digits in given number = %lld",i);
    getch();
}

