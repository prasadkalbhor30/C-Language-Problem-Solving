//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <conio.h>
int primeOrNot(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printf(primeOrNot(m)==1?"Its a prime number":"It is not prime number");
    return 0;
}
int primeOrNot(int a)
{
    for (int i = a-1; i>1; i--)
        if(a%i==0)
            return 0;
    return 1;
     
}
