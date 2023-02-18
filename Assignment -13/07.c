#include <stdio.h>
#include <conio.h>
void hcf(int,int,int);
void main()
{
    int n,m;
    printf("Enter two numbers :");
    scanf("%d%d",&n,&m);
    hcf(n,m,n);
}
void hcf(int a,int b,int n)
{

    if(a%n!=0&&b%n!=0)
        hcf(a,b,n-1);
    
}