//5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
#include <conio.h>
void printPrimeNum(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printPrimeNum(m);
    return 0;
}
void printPrimeNum(int a)
{
    int i,j=1;
    while (a)
    {
        for (i = j-1; i>1; i--)
            if(j%i==0)
                break;
        if(i==1)
        {
            printf("%d\n",j);
            a--;
        }  
        j++;
    }  
}
