#include <stdio.h>
int main()
{
    int n;
    printf("Enter ay number :");
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        n=n-n*2;
        printf("%d",n);
        break;
    case 0:
        n=n-n*2;
        printf("%d",n);
        break;
    }
}