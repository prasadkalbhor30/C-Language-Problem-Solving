#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a month number :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("No of days = 31");
        break;
    case 2:
        printf("No of days = 28");
        break;
    case 3:
        printf("No of days = 31");
        break;
    case 4:
        printf("No of days = 30");
        break;
    case 5:
        printf("No of days = 31");
        break;
    case 6:
        printf("No of days = 30");
        break;
    case 7:
        printf("No of days = 31");
        break;
    case 8:
        printf("No of days = 31");
        break;
    case 9:
        printf("No of days = 30");
        break;
    case 10:
        printf("No of days = 31");
        break;
    case 11:
        printf("No of days = 30");
        break;
    case 12:
        printf("No of days = 31");
        break;
    default:
        printf("invalid month number");
        break;
    }

}