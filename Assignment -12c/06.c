#include <stdio.h>
#include <conio.h>
void peven(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    peven(n);
}
void peven(int a)
{
    if(a>0)
    {
        printf("%d\n",a*2);
        peven(a-1);
    }
        
}