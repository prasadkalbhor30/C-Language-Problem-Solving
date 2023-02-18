//Write a program to reverse a given number
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,x,l=0,n,v;
    printf("Enter a number which you want to reverse : ");
    scanf("%d",&n);
    i=n;
    for(v=0;i!=0;v++)
        i/=10;
    for(i=1;i<=v;i++)
    {
        x=n%10;
        n/=10;
        for(j=i;j<v;j++)
            x*=10;
        l+=x;
    }
    printf("Reversed number = %d",l);

}