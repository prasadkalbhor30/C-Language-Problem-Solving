#include <stdio.h>
int main()
{
    int n;
    printf("Enter ay number :");
    scanf("%d",&n);
    switch (n%2)
    {
    case 1:
        printf("you entered odd number");
        break;
    case 0:
        printf("Upper nearest odd number = %d",n+1);
        break;
    }
}