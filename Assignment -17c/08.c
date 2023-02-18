#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    char c,str[50],str2[50];
    printf("Enter a string to copy:");
    fgets(str,50,stdin);
    for ( i = 0; str[i]; i++)
        str2[i]=str[i];
    str2[i]=0;
    printf("%s%s",str,str2);
}
