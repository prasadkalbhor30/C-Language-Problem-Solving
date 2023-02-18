#include <stdio.h>
#include <conio.h>
int lenstr(char *);
int main()
{
    int i,j,v;
    char str[5][40];
    
    for(i=0;i<=4;i++)
    {
        printf("Enter your city name %d :",i+1);
        fgets(str[i],40,stdin);
    }
    for(i=0;i<=4;i++)
    {
        v=0;
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
                v++;
        }
        printf("string %d = %d vovels\n",i+1,v);
    }
}