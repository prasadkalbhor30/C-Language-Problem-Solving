#include <stdio.h>
int main()
{
    int n;
    printf("Enter a electricity units :");
    scanf("%d",&n);
    switch (n)
    {
    case 1 ... 50:
        printf("Total elctricity bill = Rs. %f",n*0.50);
        break;
    case 51 ... 150:
        printf("Total elctricity bill = Rs.  %f",n*0.75);
        break;
    case 151 ... 250:
        printf("Total elctricity bill = Rs.  %f",n*1.20);
        break;
    default:
        if(n<1)
            printf("Invalid units");
        else
            printf("Total elctricity bill = Rs.  %f",(n*1.50)+n*20.0/100);
        break;
    }
}