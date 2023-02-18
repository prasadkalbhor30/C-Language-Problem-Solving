#include <stdio.h>
#include <conio.h>
void natnum(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    natnum(n);
}
void natnum(int a)
{
    if(a>0)
    {
        printf("%d\n",a);
        natnum(a-1);
    }
        
}