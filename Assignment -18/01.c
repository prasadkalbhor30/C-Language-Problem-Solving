#include <stdio.h>
#include <conio.h>
int lenstr(char *);
int main()
{
    int i;
    char str[40];
    printf("Enter your full name :");
    fgets(str,40,stdin);
    i=lenstr(str);
    printf("Length of the string = %d",i-1);
}
int lenstr(char str2[])
{
    int i;
    for ( i = 0; str2[i]; i++);
    return i;
}
