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