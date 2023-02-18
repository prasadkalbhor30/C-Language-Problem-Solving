#include <stdio.h>
#include <conio.h>
int digitCount(int);
void main()
{
    int n,s;
    printf("Enter a number :");
    scanf("%d",&n);
    s=digitCount(n);
    printf("Digits of given number  = %d",s);
}
int digitCount(int a)
{
    if(a<10)
        return 1;
    a=1+digitCount(a/10);
    return a;
}