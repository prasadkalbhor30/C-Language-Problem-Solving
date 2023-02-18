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
}
int countw(char str2[])
{
    int j, s,i;
    s=strlen(str2)-1;
    for(j=s;j>=0;j--)
    {
        if(str2[j]==' '||j==0)
        {
            for (i = j==0?0:1;j+i<=s-1&&str2[j+i]!=' '; i++)
            {
                printf("%c",str2[j+i]);
            }
            printf(" ");
        }
    }
}