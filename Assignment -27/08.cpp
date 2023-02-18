#include <iostream>
using namespace std;
class Bank
{
private:
    float base, height;
public:
    void saverec(float x, float y) { base = x, height = y; }
    float rectangle()
    {
        return base * height;
    }
};

int main()
{
    float m, n;
    Bank obj;
    cout << "Enter sides of a rectangle :" << endl;
    cout << "a : ";
    cin >> m;
    cout << "b : ";
    cin >> n;
    obj.saverec(m, n);
    cout << "Bank of rectangle = " << obj.rectangle() << endl;
    return 0;
}