//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
#include <conio.h>
void bin(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    bin(n);
}
void bin(int a)
{
    int i;
    i=a%2;
    if(a!=1)
        bin(a/2);
    printf("%d",i);
}

