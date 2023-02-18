//1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
#include <conio.h>
int lcm(int,int);
int main()
{
    int m,n;
    printf("Enter first number :");
    scanf("%d",&m);
    printf("Enter second number :");
    scanf("%d",&n);
    printf("LCM of %d and %d = %d ",m,n,lcm(m,n));
    return 0;
}
int lcm(int a,int b)
{
    int m=a,n=b;
    while (m)
    {
        while (m>=n)
        {
            if(m==n)
                return m;
            n+=b;
        }
        m+=a;
    }  
}
