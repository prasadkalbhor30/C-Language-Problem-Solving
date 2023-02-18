//9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int j=7;
    while(j!=0)
    {
        int a=0,b,i,c,m,n;
        printf("\nEnter a number :");
        scanf("%d",&n);
        m=n;
        j=n;
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
            printf("armstrong number");
        else
            printf("Not an armstrong number");
    }
}