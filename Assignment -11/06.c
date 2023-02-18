//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
void printPrimeNum(int,int);
int main()
{
    int m,n;
    printf("Enter a number :");
    scanf("%d",&m);
    printf("Enter a number :");
    scanf("%d",&n);
    printPrimeNum(m,n);
    return 0;
}
void printPrimeNum(int a,int b)
{
    int i;
    if(a>b)
        i=a,a=b,b=i;
    for (;a<=b;a++)
    {
        for (i = a-1; i>1; i--)
            if(a%i==0)
                break;
        if(i==1)
            printf("%d\n",a);
    }  
}
