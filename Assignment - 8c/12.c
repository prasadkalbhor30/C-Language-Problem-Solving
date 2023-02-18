#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, o;
    for (i = 1; i <= 4; i++)
    {
        o=1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= (8 - i))
                {
                    printf(" %c",o+64);
                    if(j<4)
                       o++;
                    else
                       o--;
                }
            else
                printf("  ");
        }
        printf("\n");
    }
}