#include <stdio.h>
#include <conio.h>
int adjac(int b[]);
void main()
{
    int i,j, a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    i=adjac(a);
    if (i==0)
        printf("There is no duplicate values in an array");
    else
        printf("First occurance of adjacent duplicate values is= %d",i);
}
int adjac(int b[])
{
    int i,j;
    for (i = 0,j = 1; i <= 9;j++, i++)
        if(b[i]==b[j])
            return b[i];
    return 0;
}