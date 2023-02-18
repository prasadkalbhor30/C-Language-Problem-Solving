//10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include <conio.h>
void main()
{
    int j;
    for(j=1;j<=1000;j++)
    {
        int a=0,b,i,c,m,n;
        n=j;
        m=j;
        for(c=0;m!=0;c++)
            m/=10;
        while(n!=0)
        {
            a=n%10;
            n/=10;
            b=a;
            for(i=1;i<c;i++)
                a*=b;
            m+=a;
        }
        if(j==m)
            printf("%d\n",j);
    }
}