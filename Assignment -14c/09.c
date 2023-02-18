#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter size of a array : ");
    scanf("%d",&n);
    int i,j,m,a[n];
    printf("Enter %d numbers :",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= n/2; i++)
    {
        j = n-(i+1);
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
    for (i = 0; i < n; i++)
        printf("%d ,",a[i]); 
}
