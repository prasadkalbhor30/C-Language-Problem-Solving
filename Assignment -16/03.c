#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,a[3][3];
    printf("Enter 9 numbers of array a :");
    for (j = 0; j <= 2; j++)
        for (i = 0; i <= 2; i++)
            scanf("%d", &a[j][i]);
    printf("Enter 9 numbers of array b :");
    for (j = 0; j <= 2; j++)
        for (i = 0; i <= 2; i++)
            scanf("%d", &b[j][i]);
    for (j = 0; j <= 2; j++)
        for (i = 0; i <= 2; i++)
            c[j][i]=a[j][i]+b[j][i];
    for (j = 0; j <= 2; j++)
    {
        for (i = 0; i <= 2; i++)
            printf("%d ",c[j][i]);
        printf("\n");
    }

}
