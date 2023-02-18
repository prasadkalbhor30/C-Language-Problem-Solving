//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
#include <conio.h>
int givenDigit(int, int);
int main()
{
    int m, n;
    printf("Enter a number :");
    scanf("%d", &m);
    printf("Enter a digit to find :");
    scanf("%d", &n);
    printf(givenDigit(m, n) ?"The given number contains given digit":"The given number does not contain given digit");
    return 0;
}
int givenDigit(int a, int b)
{ 
    for (; a != 0; a /= 10)
        if (a % 10 == b)
            return 1;
    return 0;
}
