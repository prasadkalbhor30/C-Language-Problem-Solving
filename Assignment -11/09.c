//9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
#include <conio.h>
int anyNumSquare(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printf("Square of %d = %d",m,anyNumSquare(m));
    return 0;
}
int anyNumSquare(int a)
{
    return a*a;
}
