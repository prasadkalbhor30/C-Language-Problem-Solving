#include <iostream>
using namespace std;
class Area
{
private:
    float r;

public:
    void saveci(float x) { r = x; }
    float circle()
    {
        return 3.14 * r * r;
    }
};
int main()
{
    float m;
    Area obj;
    cout << "Enter radius of circle :" << endl;
    cout << "r : ";
    cin >> m;
    obj.saveci(m);
    cout << "Area of circle = " << obj.circle() << endl;
    return 0;
}