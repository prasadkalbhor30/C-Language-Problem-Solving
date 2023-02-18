#include <stdio.h>
#include <conio.h>
int sort(int n[]);
void main()
{
    int i,j,m,a[10];
    printf("Enter 10 numbers :");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    sort(a);
    for (i = 0; i <= 9; i++)
        printf("%d ,",a[i]); 
}
int sort(int n[])
{
    int i,j,m;
    for (i = 0; i <= 9; i++)
        for (j = i+1; j <= 9; j++)
            if(n[i]>n[j])
            {
                m=n[i];
                n[i]=n[j];
                n[j]=m;
            }
} 