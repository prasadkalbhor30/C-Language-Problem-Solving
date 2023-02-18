#include <stdio.h>
#include <conio.h>
void fibSeries(int,int,int);
void main()
{
    int n,i=-1,j=1;
    printf("Enter a number :");
    scanf("%d",&n);
    fibSeries(n,i,j);
}
void fibSeries(int a,int x,int y)
{
    if(a>0)
    {
        printf("%d\n",x+y);
        fibSeries(a-1,y,x+y);
    }  
}