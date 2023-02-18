#include <stdio.h>
#include <conio.h>
void rotate(int b[],int ,int);
void main()
{
    int i=1, m, l=2,k, j, a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    printf("Enter which direction you want to rotate an array :\nEnter a number\n1:Rotate in left direction\n0:Rotate in right direction ");
        scanf("%d", &i);
    printf("Enter how many digits you want to rotate : ");
        scanf("%d", &l);
    rotate(a,l,i);
    for(i=0;i<=9;i++)
        printf("%d ,",a[i]);
}
void rotate(int b[],int l,int i)
{
    int k,m,j;
    if(i==0)
        for (k = 1; k <= l; k++)
        {
            m = b[9];
            for (i = 9, j = 8; j >= 0; i--, j--)
                b[i] = b[j];
            b[0] = m;
        }
    else
        for (k = 1; k <= l; k++)
        {
            m = b[0];
            for (i = 0, j = 1; j <= 9; i++, j++)
                b[i] = b[j];
            b[9] = m;
        }
}
