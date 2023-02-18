#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i,k,j=0;
    char m,c,str[50];
    printf("Enter a string :");
    fgets(str,50,stdin);
    j = strlen(str)-2;
    k=j/2;
    for ( i = 0;i<=k; i++,j--)
    {
        m=str[i];
        str[i]=str[j];
        str[j]=m;
    } 
        printf("%s",str);
}