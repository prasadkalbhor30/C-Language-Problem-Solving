#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter size of a array : ");
    scanf("%d",&n);
    int i,j,m,a[n],b[n];
    printf("Enter %d numbers :",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        b[i]=a[i];
    for (i = 0; i < n; i++)
        printf("%d ,",b[i]); 
}
