#include <stdio.h>
#include <conio.h>
int digitSum(int);
void main()
{
    int n,s;
    printf("Enter a number :");
    scanf("%d",&n);
    s=digitSum(n);
    printf("Sum of digits of given number  = %d",s);
}
int digitSum(int a)
{
    if(a<10)
        return a;
    a=a%10+digitSum(a/10);
    return a;
}