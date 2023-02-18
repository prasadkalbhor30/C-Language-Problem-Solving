#include <iostream>
using namespace std;
class Area
{
private:
    float a, base, height, r;

public:
    void savesq(float x) { a = x; }
    void saveci(float x) { r = x; }
    void saverec(float x, float y) { base = x, height = y; }
    float square()
    {
        return a * a;
    }
    float rectangle()
    {
        return base * height;
    }
    float circle()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    float m, n;
    Area obj;
    cout << "Enter side of a square :" << endl;
    cout << "a : ";
    cin >> m;
    obj.savesq(m);
    cout << "Area of square = " << obj.square() << endl;
    cout << "Enter sides of a rectangle :" << endl;
    cout << "a : ";
    cin >> m;
    cout << "b : ";
    cin >> n;
    obj.saverec(m, n);
    cout << "Area of rectangle = " << obj.rectangle() << endl;
    cout << "Enter radius of circle :" << endl;
    cout << "r : ";
    cin >> m;
    obj.saveci(m);
    cout << "Area of circle = " << obj.circle() << endl;
    return 0;
}