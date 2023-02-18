//2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
#include <conio.h>
float simpleInterest(float,float,float);
int main()
{
    float p,r,t;
    printf("Enter principal , rate of interest and time :\nprincipal : ");
    scanf("%f",&p);
    printf("Rate of interest : ");
    scanf("%f",&r);
    printf("Time : ");
    scanf("%f",&t);
    printf("Simple Interest = %f ",simpleInterest(p,r,t));
    return 0;
}
float simpleInterest(float a,float b,float c)
{
    return a*b*c;  
}
