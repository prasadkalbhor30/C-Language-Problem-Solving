#include <iostream>
using namespace std;
int add(int ,int , int=0);
int main()
{
    int a,b,c;
    cout<<"Enter a three numbers to calculate addition : "<<endl;
    cout<<"first number : ";
    cin>>a;
    cout<<"second number : ";
    cin>>b;
    cout<<"third number : ";
    cin>>c;
    cout<<"Addition of a three numbers = "<<add(a,b,c)<<endl;
    cout<<"Enter a two numbers to calculate addition : "<<endl;
    cout<<"first number : ";
    cin>>a;
    cout<<"second number : ";
    cin>>b;
    cout<<"Addition of a two numbers = "<<add(a,b);
    return 0;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
