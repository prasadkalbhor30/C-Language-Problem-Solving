#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    void setTime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << hr << " hr " << min << " min " << sec << " sec";
    }
};
int main()
{
    int H, M, S;
    cout << "Enter hour , minutes and seconds :" << endl;
    cout << "Hour : ";
    cin >> H;
    cout << "Minutes : ";
    cin >> M;
    cout << "Seconds : ";
    cin >> S;
    Time obj;
    obj.setTime(H, M, S);
    obj.showTime();
    return 0;
}