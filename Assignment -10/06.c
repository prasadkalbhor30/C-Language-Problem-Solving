//6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
#include <conio.h>
int factorial(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d", &m);
    printf("Factorial of %d is %d ", m, factorial(m));
    return 0;
}
int factorial(int a)
{
    int b;
    for (b = 1; a != 0; a--)
        b *= a;
    return b;
}
