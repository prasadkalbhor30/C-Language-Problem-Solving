#include <stdio.h>
#include <conio.h>
int natnum(int);
void main()
{
    int n,s;
    printf("Enter a number :");
    scanf("%d",&n);
    s=natnum(n);
    printf("Sum of n natural number = %d",s);
}
int natnum(int a)
{
    if(a==1)
        return 1;
    a=a+natnum(a-1);
    return a;
}