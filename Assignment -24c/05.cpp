#include <iostream>
int fibbo(int);
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter a  number :";
    cin>>n;
    cout<<(fibbo(n)?"Its a term of fibbocacci series":"Its not a term of fibbocacci series");
    return 0;
}
int fibbo(int x)
{
    int i=-1,j=1,k=0;
    while(k<x)
    {
        i=j;
        j=k;
        k=i+j;
    }
    return x==k?1:0;
}
