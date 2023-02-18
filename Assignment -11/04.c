//4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
#include <conio.h>
int nextPrimeNum(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printf("Next prime number =%d",nextPrimeNum(m));
    return 0;
}
int nextPrimeNum(int a)
{
    int i;
    for (int j = a+1;1; j++)
    {
        for (i = j-1; i>1; i--)
            if(j%i==0)
                break;
        if(i==1)
            return j;
    }  
}
