#include <stdio.h>
#include <conio.h>
int smallNum(int n[]);
void main()
{
    int i,j,a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    i=smallNum(a);
    printf("The smallest number in an array= %d",i);
}
int smallNum(int n[])
{
    int i,j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
            if(n[i]>n[j])
                break;
        if(j==10)
            return n[i];
    }
}   