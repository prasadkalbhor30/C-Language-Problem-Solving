#include <iostream>
using namespace std;

class Time
{
    private:
        int h,m,s;
    public:
        void set(int H, int M, int S)
        {
            h=H;
            m=M;
            s=S;
        }
        // void operator>>()
        // {
            
        // }
        bool operator==(Time t)
        {
            if(h==t.h && m==t.m && s==t.s)
                return true;
            else 
                return false;
        }
        void operator<<()
        {
            cout<<"Hours      :  "<<h<<endl<<"Minutes    :  "<<m<<endl<<"Seconds    :  "<<s<<endl;
        }

};

void hello()
{
    cout<<endl;
}
int main()
{
    int h,m,s;
    Time t1,t2;
    cout<<"Enter First Time"<<endl<<"---------------------------"<<endl;
    cout<<"Enter Hours    :   ";
    cin>>h;
    hello();
    cout<<"Enter Minutes  :   ";
    cin>>m;
    hello();
    cout<<"Enter Seconds  :   ";
    hello();
    cin>>s;
    hello();
    t1.set(h,m,s);
    cout<<"First Time  :   "<<endl;
    t1.showTime();
    hello();
    cout<<"Enter Second Time"<<endl<<"---------------------------"<<endl;
    cout<<"Enter Hours    :   ";
    cin>>h;
    hello();
    cout<<"Enter Minutes  :   ";
    cin>>m;
    hello();
    cout<<"Enter Seconds  :   ";
    hello();
    cin>>s; 
    hello();
    t2.set(h,m,s);
    cout<<"Second Time  :   "<<endl;
    t2<<t1;
    hello();
    if (t1==t2)
        cout<<"Times are same";
    else
        cout<<"Times are different";

    return 0;
}