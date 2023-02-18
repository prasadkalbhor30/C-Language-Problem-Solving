#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j=0;
    char c,str[50];
    printf("Enter a string to count vovels in it :");
    fgets(str,50,stdin);
    for ( i = 0; str[i]; i++)
        if('a'==str[i]||'e'==str[i]||'i'==str[i]||'o'==str[i]||'u'==str[i]||'A'==str[i]||'E'==str[i]||'I'==str[i]||'O'==str[i]||'U'==str[i])
            j++;
    printf("Count of character in given string = %d",j);
}
