#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j=0;
    char c,str[50];
    printf("Enter a string :");
    fgets(str,50,stdin);
    printf("Enter a character you want to count in string :");
    scanf("%c",&c);
    for ( i = 0; str[i]; i++)
        if(c==str[i])
            j++;
    printf("Count of character in given string = %d",j);
}
