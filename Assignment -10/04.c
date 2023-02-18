//4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
#include <conio.h>
void natNum(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    natNum(m);
    return 0;
}
void natNum(int a)
{
    int b;
    for (b=1;a>=b;b++)
        printf("%d\n",b);
}
