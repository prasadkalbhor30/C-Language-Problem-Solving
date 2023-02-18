#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j, a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if(a[i]>a[j])
                break;
        }
        if(j==10)
        {
            printf("The smallest number in an array= %d", a[i]);
            break;
        }
    }
}