#include <iostream>
int power(int , int);
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter a  number x :";
    cin>>n;
    cout<<"Enter a  power y :";
    cin>>m;
    cout<<n<<"^"<<m<<"="<<power(n,m);
    return 0;
}
int power(int x , int y)
{
    int l,i;
    for (l=1,i=1;i<=y;i++)
        l*=x;
    return l;
}
