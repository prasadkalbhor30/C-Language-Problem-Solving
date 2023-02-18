#include <iostream>
using namespace std;
class Greatest
{
private:
    float a, b, c;

public:
    void great(int x, int y, int z) { a = x, b = y, c = z; }
    float great()
    {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }
};

int main()
{
    float m, n, l;
    Greatest obj;
    cout << "Enter three numbers :" << endl;
    cin >> m >> n >> l;
    obj.great(m, n, l);
    cout << "Greatest number among three is = " << obj.great() << endl;
    return 0;
}