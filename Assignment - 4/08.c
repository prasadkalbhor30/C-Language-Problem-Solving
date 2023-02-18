//8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int m, i,j, n;
    printf("Enter a number : ");
    scanf("%d", &m);
    for (i = m+1;1;i++)
    {
        for ( j = i-1; j >= 1; j--)
            if(i%j==0)
                break;
        if(j==1)
        {
            printf("%d\n",i);
            break;
        }
            
    }
}
