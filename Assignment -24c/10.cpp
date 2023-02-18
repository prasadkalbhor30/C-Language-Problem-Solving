#include <iostream>
using namespace std;
int Sum(int, int);
float Sum(float, float);
main()
{
    float a, b;
    cout << "Enter two numberes : ";
    cin >> a >> b;
    int m = a, n = b;
    if (m == a && n == b)
        cout << "Sum of two numbers = " << Sum(m, n);
    else
        cout << "Sum of two numbers = " << Sum(a, b);
}
int Sum(int a, int b)
{
    return a + b;
}
float Sum(float a, float b)
{
    return a + b;
}