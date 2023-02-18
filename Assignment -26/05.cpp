#include <iostream>
using namespace std;
class Date
{
private:
    int d,m,y;

public:
    Date(int i,int j,int k)
    { 
        d=i;
        m=j;
        y=k; 
    }

    void showDate();
};
void Date::showDate()
{
    cout<<d<<":"<<m<<":"<<y<<endl;
}
int main()
{
    int M,Y,D;
    cout<<"Enter date month no. and year : "<<endl<<"date : ";
    cin>>D;
    cout<<"month : ";
    cin>>M;
    cout<<"year : ";
    cin>>Y;
    Date obj(D,M,Y);
    obj.showDate();
    return 0;
}