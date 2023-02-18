//Write a program to calculate LCM of two numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,n1,n2,m,n;
    printf("Enter two numbers to calculate lcm : ");
    scanf("%d%d",&m,&n);
    if(m>n)
        n1=m,n2=n;
    else
        n1=n,n2=m,m=n1,n=n2;
     for(;;n1+=m)
    {
        for(n2=n;n2<n1;n2+=n);
        if(n1==n2)
        {
            printf("Lcm =%d",n1);
            break;
        }
            
    }
}
