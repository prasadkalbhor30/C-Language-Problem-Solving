#include <stdio.h>
#include <conio.h>
void main()
{       
    int i,n;
    printf("Enter how many cubes of numbers you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }

}