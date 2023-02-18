#include <stdio.h>
#include <conio.h>
int power(int,int);
void main()
{
    int n,p;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("enter power number :");
    scanf("%d",&p);
    printf("%d^%d = %d ",n,p,power(n,p));
}
int power(int a,int p)
{
    if(p==1)
        return a;
    return a*power(a,p-1);
}