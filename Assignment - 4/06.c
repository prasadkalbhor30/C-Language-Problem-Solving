//6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int i, j ,m;
    for (i = 1,m=1; 100 > i; i++)
    {
        for ( j = i-1; j >= 1; j--)
            if(i%j==0)
                break;
        if(j==1)
        {
            printf("%d=%d\n",m,i);
            m++;
        }
    }
}
