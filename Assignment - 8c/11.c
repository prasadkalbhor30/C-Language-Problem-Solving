#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j,o;
    for (i = 1; i <= 5; i++)
    {
        o=1;
        for (j = 1; j<=9; j++)
        {
            if(j>=(6-i)&&j<=(4+i))
            {
                printf(" %c",o+64);
                if(j<5)
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