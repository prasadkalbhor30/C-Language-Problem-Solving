#include <stdio.h>
#include <conio.h>
int facto(int);
void main()
{
    int n,s;
    printf("Enter a number :");
    scanf("%d",&n);
    s=facto(n);
    printf("factorial of a given number = %d",s);
}
int facto(int a)
{
    if(a==1)
        return 1;
    a=a*facto(a-1);
    return a;
}