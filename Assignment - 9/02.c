#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b;
    int n;
    printf("Enter a number which operation you want to perform: \n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n");
    scanf("%d",&n);
    printf("Enter two numbers :");
    scanf("%f%f",&a,&b);
    switch (n)
    {
    case 1:
        printf("Addition of %d + %d = %f",a,b,a+b);
        break;
    case 2:
        printf("Substraction of %d - %d = %f",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %d * %d = %f",a,b,a*b);
        break;
    case 4:
        printf("Division of %d / %d = %f",a,b,a/b);
        break;
    default:
        printf("invalid operation number");
        break;
    }
    getch();
}