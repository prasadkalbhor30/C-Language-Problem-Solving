#include <stdio.h>
#include <conio.h>
void oct(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    oct(n);
}
void oct(int a)
{
    if(a>8)
    {
        oct(a/8);
        a=a%8;
    }
    printf("%d",a);
}