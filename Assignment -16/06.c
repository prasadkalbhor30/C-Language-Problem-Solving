#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,m,a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        for (j = i+1; j <= 9; j++)
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
    for (i = 0; i <= 9; i++)
        printf("%d ,",a[i]); 
}
