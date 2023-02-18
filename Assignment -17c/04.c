#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j = 0;
    char c, str[50];
    printf("Enter a string to convert in uppercase:");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        if (str[i] > 96 && str[i]<123)
            str[i] = str[i] - 32;
    printf("String in upper case : %s", str);
}
