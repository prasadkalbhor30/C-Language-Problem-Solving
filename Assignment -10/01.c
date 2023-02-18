//1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
#include <conio.h>
float circle_Area(float);
int main()
{
    float r;
    printf("Enter radius of circle :");
    scanf("%f",&r);
    printf("Area of circle = %f ",circle_Area(r));
    return 0;
}
float circle_Area(float a)
{
    return 3.14*a*a;  
}
