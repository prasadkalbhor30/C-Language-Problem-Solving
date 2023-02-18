#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i,a=0,s=0,d=0;
    char m,c,str[50];
    printf("Enter a string :");
    fgets(str,50,stdin);
    for ( i = 0;str[i]; i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            a++;
        else if(str[i]>='1'&&str[i]<='9')
            d++;
        else if(str[i]>=' '&&str[i]<='~')
            s++;
    }
        printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d",a,d,s);
}