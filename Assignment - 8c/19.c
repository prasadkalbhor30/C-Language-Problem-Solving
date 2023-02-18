#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, o;
    for (i = 1; i <= 13; i++)
    {
        o = 1;
        for (j = 1; j <= 19; j++)
        {

            if (i == 4 && j == 7)
            {
                printf("MySirG");
                j = 12;
            }

            else if (j >= (4 - i) && j <= (i + 6) && i <= 3 || j >= (14 - i) && j <= (16 + i) && i <= 3 || j >= (i - 3) && j <= (23 - i) && i >= 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}