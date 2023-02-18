//10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
#include <conio.h>
void reverse(int);
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int a)
{
    printf("%d",a%10);
    if(a>9)
        reverse(a/10);
}