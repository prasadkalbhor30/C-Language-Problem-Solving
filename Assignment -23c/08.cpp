#include <iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter two numbers to swap its values a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl<<"b="<<b;
}