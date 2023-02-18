//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
#include <conio.h>
void fivSeries(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    fivSeries(m);
    return 0;
}
void fivSeries(int a)
{
    int i,j,k;
    for (i=-1,j=1;a;a--)
    {
        k=i+j;
        printf("%d\n",k);
        i=j;
        j=k;
    }  
}
