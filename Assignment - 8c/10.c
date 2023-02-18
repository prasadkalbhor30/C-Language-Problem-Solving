#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j,o;
    for (i = 1; i <= 6; i++)
    {
        o=1;
        for (j = 1; j<=11; j++)
        {
            if(j>=(5+i)||j<=(7-i))
                {
                    printf(" %d",o);
                    if(j<(7-i))
                       o++;
                    if(j>=(5+i))
                       o--;
                }
            else
                printf("  ");
        }
        printf("\n\n");
    }
}