#include <iostream>
using namespace std;
int greatNum(int, int);
float greatNum(float, float);
main()
{
    float a, b;
    cout << "Enter two numberes : ";
    cin >> a >> b;
    int m = a, n = b;
    if (m == a && n == b)
        cout << "The greatest number = " << greatNum(m, n);
    else
        cout << "The greatest number = " << greatNum(a, b);
}
int greatNum(int a, int b)
{
    return a > b ? a : b;
}
float greatNum(float a, float b)
{
    return a > b ? a : b;
}