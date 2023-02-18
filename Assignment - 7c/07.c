//7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int m, i,j, n;
    printf("Enter first number : ");
    scanf("%d", &m);
    printf("Enter second number : ");
    scanf("%d", &n);
    for (i = m>n?n:m; (m<n?n:m) >= i; i++)
    {
        for ( j = i-1; j >= 1; j--)
            if(i%j==0)
                break;
        if(j==1)
            printf("%d\n",i);
    }
}
