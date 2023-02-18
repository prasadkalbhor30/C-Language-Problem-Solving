//10. Write a program in C to find the sum of the series 1! /1+2/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>
#include <conio.h>
int sumOfseries(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum of the series = %d", sumOfseries(n));
    return 0;
}
int sumOfseries(int a)
{
    int i, j, l;
    for (l = 0; a > 0; a--)
    {
        for (i = a, j = 1; i != 0; i--)
            j *= i;
        l += j;
    }
    return l;
}