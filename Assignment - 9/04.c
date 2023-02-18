#include <stdio.h>
int main()
{
    int a,b,c,n,x,y,z;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter number what you want to check : \n1. Check wheather given set of numbers are lengths of an isosceles triangle or not.\n2. Check wheather given set of numbers are lengths sides of a right angled triangle or not.\n3. Check wheather given set of numbers are equilateral triangle or not.\n4.Exit");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        if(a==b || b==c || c==a)
            printf("It is an isosceles triangle");
        else
            printf("Not an isosceles triangle");
        break;
    case 2:
        x,y,z=a>b&&a>c?a,b,c:b>c?b,a,c:c,a,b;
        if(x*x==y*y+z*z)
            printf("It is an right angled triangle");
        else
            printf("Not an right angled triangle");
        break;
    case 3:
        if(a==b&&b==c)
            printf("It is an equilateral triangle");
        else
            printf("Not an equilateral triangle");
        break;
    case 4:
        break;
    default:
        printf("Invalid input");
        break;
    }
}