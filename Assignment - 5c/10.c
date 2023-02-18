#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("Enter a number which table you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }

} 