#include <stdio.h>
#include <conio.h>
void upp(char *);
void main()
{
    int i, j = 0;
    char c, str[50];
    printf("Enter a string to convert in uppercase:");
    fgets(str, 50, stdin);
    upp(str);
    printf("String in upper case : %s", str);
}
void upp(char str2[])
{
    int i;
    for (i = 0; str2[i]; i++)
        if (str2[i] > 96 && str2[i]<123)
            str2[i] = str2[i] - 32;
}