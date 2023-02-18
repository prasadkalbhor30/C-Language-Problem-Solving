//2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
#include <conio.h>
int hcf(int,int);
int main()
{
    int m,n;
    printf("Enter first number :");
    scanf("%d",&m);
    printf("Enter second number :");
    scanf("%d",&n);
    printf("HCF of %d and %d = %d ",m,n,hcf(m,n));
    return 0;
}
int hcf(int m,int n)
{
    for(int i=m;i>=1;i--)
        if(m%i==0 && n%i==0)
            return i;
}
