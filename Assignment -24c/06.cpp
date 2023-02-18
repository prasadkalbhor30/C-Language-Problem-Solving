#include <iostream>
void dataSwap(int &,int &);
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter first number m:";
    cin>>m;
    cout<<"Enter second number n:";
    cin>>n;
    dataSwap(n,m);
    cout<<"m = "<<m<<" and "<<"n = "<<n;
    return 0;
}
void dataSwap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
