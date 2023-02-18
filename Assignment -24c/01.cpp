#include <iostream>
using namespace std;
int primeNo(int);
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<(primeNo(n)?"it is a prime number":"not prime number");
    return 0;

}
int primeNo(int n)
{
    int i;
    for ( i = 2; i < n; i++)
        if(n%i==0)
            break;
    if(i==n)
        return 1;
    else
        return 0;
}
