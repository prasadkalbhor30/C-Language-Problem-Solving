#include <stdio.h>
#include <conio.h>
void main()
{
    int i,e=0,o=0,a[10];
    printf("Enter 10 numbers :");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
            o+=a[i];
        else
            e+=a[i];
    }
    printf("Sum of all even numbers= %d\nSum of all odd numbers= %d",e,o);
}
