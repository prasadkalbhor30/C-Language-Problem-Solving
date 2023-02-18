//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.(TSRS)
#include <stdio.h>
#include <conio.h>
int evenOrodd(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printf(evenOrodd(m)==0?"Its a even number":"Its odd number");
    return 0;
}
int evenOrodd(int a)
{
    return a%2?1:0;
}
