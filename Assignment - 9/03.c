#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a day number if a week :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Good Morning this is monday today");
        break;
    case 2:
        printf("Good Morning this is tueseday today");
        break;
    case 3:
        printf("Good Morning this is wedneseday today");
        break;
    case 4:
        printf("Good Morning this is thurseday today");
        break;
    case 5:
        printf("Good Morning this is friday today");
        break;
    case 6:
        printf("Good Morning this is saturday today");
        break;
    case 7:
        printf("Good Morning this is sunday today");
        break;
    default:
        printf("invalid day number");
        break;
    }

}