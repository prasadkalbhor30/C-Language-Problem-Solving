#include <stdio.h>
#include <conio.h>
#include <string.h>
int repchar(char *);
int main()
{
    char i,str[500];
    printf("Enter a string :");
    fgets(str, 500, stdin);
    i = repchar(str);
    if(i==0)
        printf("no repeated character in string");
    else
        printf("first repeated character = %c",i);
}
int repchar(char str2[])
{
    int j, s,i;
    s=strlen(str2)-1;
    for(j=0;str2[j];j++)
        for (i=j+1;str2[i]; i++)
            if(str2[i]==str2[j])
                return str2[i];
    return 0;
}