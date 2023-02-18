#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showTime()
    {
        cout << h << " hr " << m << " min " << s << " sec"<<endl;
    }
    void normalize()
    {
        m+=s/60;
        h=h+m/60;
        m=m%60;
        s=s%60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h+t.h;
        temp.m = m+t.m;
        temp.s = s+t.s;
        return temp;
    }
};
int main()
{
    int H, M, S,H2, M2, S2;
    Time obj,obj2,obj3;

    cout << "Enter hour , minutes and seconds : "<<endl;
    cout << "Hour : ";
    cin >> H;
    cout << "Minutes : ";
    cin >> M;
    cout << "Seconds : ";
    cin >> S;
    obj.setTime(H, M, S);
    obj.showTime();
    cout<<"Enter time to add : "<<endl;
    cout << "Hour : ";
    cin >> H2;
    cout << "Minutes : ";
    cin >> M2;
    cout << "Seconds : ";
    cin >> S2;
    obj2.setTime(H2,M2,S2);
    obj3=obj.add(obj2);
    cout<<"time after adding : ";
    obj3.showTime();
    printf("Normalizing time ...\nTime after normalizing : ");
    obj3.normalize();
    obj3.showTime();


    return 0;
}
