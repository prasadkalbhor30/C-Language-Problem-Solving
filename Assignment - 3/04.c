//4. Write a program to calculate HCF of two numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,m,b,i;
    printf("Enter two numbers to calculate hcf :");
    scanf("%d%d",&n,&m);
    b= m>n?n:m;
    for (i = b-1; i <b; i--)
    {
        if (n%i==0&&m%i==0) 
        {
            printf("Hcf=%d",i);
            break;
        }
        
    }
}