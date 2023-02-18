#include <iostream>
int highdigit(long long int);
using namespace std;
int main()
{
    long long int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<n;
    cout<<"higher number = "<<highdigit(n);
    return 0;
}
int highdigit(long long int m)
{
    long long int j,l,k;
    while(m!=0)
    {
        l=m%10;
        m/=10;
        for (k=m;k!=0;k/=10)
        {
            j=k%10;
            if(j>l)
                break;
        }
        if(k==0)
            return l;
    }  
}
