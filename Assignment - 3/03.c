//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a=-1,b=1,c=0,n;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>c)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n==c)
        printf("Its a fibbonacci series no.");
    else
        printf("Its not a fibbonacci series no.");
}