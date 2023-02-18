#include <stdio.h>
#include <conio.h>
#include <string.h>
int countw(char *);
int main()
{
    int i, k, j = 0;
    char m, c, str[500];
    printf("Enter a string :");
    fgets(str, 500, stdin);
    i = countw(str);
    printf("words in given in string =%d", i);
}
int countw(char str2[])
{
    int k = 0, i;
    for (i = 0; str2[i]; i++)
        if (str2[i] == ' '&&str2[i+1]!=' '&&str2[i+1]>'1')
        {
            k++;
        }
    return k+1;
    // printf("%d",);
}