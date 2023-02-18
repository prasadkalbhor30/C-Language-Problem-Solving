#include <stdio.h>
#include <conio.h>
#include <string.h>
int alphan(char *);
int main()
{
    int i,k,j=0;
    char m,c,str[50];
    printf("Enter a string :");
    fgets(str,50,stdin);
    i=alphan(str);
    if(i==1)
        printf("Its alphanumeric");
    else
        printf("Its not alphanumeric");
}
int alphan(char str2[])
{
    int k=0,i,m=0;
    for ( i = 0;str2[i]; i++)
    {
        if(str2[i]<='9'&&str2[i]>='1')
            k=1;
        if('a'<=str2[i]&&'z'>=str2[i]||'A'<=str2[i]&&'Z'>=str2[i])
            m=1;
    }
    if(k==1&&m==1)
        return 1;
    else
        return 0;
}