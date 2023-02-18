//5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
void oddNum(int);
int main()
{
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    oddNum(m);
    return 0;
}
void oddNum(int a)
{
    int b;
    for (b=1;a*2>=b;b+=2)
        printf("%d\n",b);
}
