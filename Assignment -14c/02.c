#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j=0,a[10];
    printf("Enter 10 numbers :");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        j+=a[i];
    }
    printf("Average of numbers stored in an array = %d",j/10);
}
