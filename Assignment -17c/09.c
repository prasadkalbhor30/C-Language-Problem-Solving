#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,m;
    char c,str[50],str2[50];
    printf("Enter a string to sort:");
    fgets(str,50,stdin);
    for (i = 0; str[i]; i++)
        for (j = i+1; str[j]; j++)
            if(str[i]>str[j])
            {
                m=str[i];
                str[i]=str[j];
                str[j]=m;
            }
    printf("%s",str);
} 