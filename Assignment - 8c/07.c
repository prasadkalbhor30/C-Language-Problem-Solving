#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j<=10; j++)
        {
            if(j>=(5+i)||j<=(6-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}