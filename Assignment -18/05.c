#include <stdio.h>
#include <conio.h>
void lwr(char *);
void main()
{
    int i, j = 0;
    char c, str[50];
    printf("Enter a string to convert in lowerrcase:");
    fgets(str, 50, stdin);
    lwr(str);
    printf("String in lowerer case : %s", str);
}
void lwr(char str2[])
{
    int i;
    for (i = 0; str2[i]; i++)
        if (str2[i] > 65 && str2[i]<91)
            str2[i] = str2[i] + 32;
}