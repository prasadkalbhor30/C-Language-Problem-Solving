#include <iostream>
using namespace std;
main()
{
    int i,j=0,a[10]={1,2,3,4,5,6,7,8,9,10};
    for (i = 0; i <= 9; i++)
    {
        j+=a[i];
    }
    cout<<"Array addition = "<<j;
    
}