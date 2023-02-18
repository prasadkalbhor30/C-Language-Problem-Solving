#include <stdio.h>
#include <conio.h>
int greatNum(int n[]);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int i,j,a[n];
    printf("Enter %d numbers :",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    i=greatNum(a);
    printf("The gretest number in an array= %d",i);
    return 0;
}
int greatNum(int n[])
{
    int i,j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
            if(n[i]<n[j])
                break;
        if(j==10)
            return n[i];
    }

}   