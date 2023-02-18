//5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int m, i, n;
    printf("Enter a first number : ");
    scanf("%d", &m);
    printf("Enter second number : ");
    scanf("%d", &n);
    for (i = m < n ? m : n; 1 < i; i--)
        if (m % i == 0 && n % i == 0)
            break;
    printf(i == 1 ? "Its co-prime numbers" : "Its not co-prime numbers");
}
