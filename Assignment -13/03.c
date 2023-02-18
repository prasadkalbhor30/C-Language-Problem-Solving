#include <stdio.h>
#include <conio.h>
int even(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("sum of even numbers =%d",even(n));
}
int even(int a)
{
    if(a==1)
        return 2;
    return a*2+even(a-1);
        
}  