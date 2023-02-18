#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,k;
    char c,str[50],str2[50];
    printf("Enter a string to copy:");
    fgets(str,50,stdin);
    for(j=0;j<=256;j++)
    {
        k=0;
        for ( i = 0; str[i]; i++)
            if ((0+j)==str[i])
                k++;
        if(k!=0&&j!=0)
            printf("\'%c\'=%d\n",0+j,k);
    }
    
    
}
