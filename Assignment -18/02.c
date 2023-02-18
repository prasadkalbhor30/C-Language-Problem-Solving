#include <stdio.h>
#include <conio.h>
#include <string.h>
void rev(char *);
void main()
{
    int i,k,j=0;
    char m,c,str[50];
    printf("Enter a string :");
    fgets(str,50,stdin);
    rev(str);
    printf("%s",str);
}
void rev(char str2[])
{
    int j,k,i,m;
    j = strlen(str2)-2;
    k=j/2;
    for ( i = 0;i<=k; i++,j--)
    {
        m=str2[i];
        str2[i]=str2[j];
        str2[j]=m;
    } 
}