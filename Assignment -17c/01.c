#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    char str[40];
    printf("Enter your full name :");
    fgets(str,40,stdin);
    for ( i = 0; str[i]; i++);
    printf("Length of the string = %d",i-1);
}
