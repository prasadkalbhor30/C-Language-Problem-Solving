#include <stdio.h>
#include <conio.h>
void reverse(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int a)
{
    printf("%d",a%10);
    if(a>9)
        reverse(a/10);
}