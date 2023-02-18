#include <iostream>
using namespace std;
class Factorial
{
private:
    int n;
public:
    void factNo(int i)
    {
        n = i;
    }
    int calFacto();
};
int Factorial::calFacto()
{
    int a;
    for (a = 1; n != 0; n--)
        a *= n;
    return a;
}
int main()
{
    int n;
    Factorial obj;
    cout << "Enter a number :";
    cin >> n;
    obj.factNo(n);
    cout << obj.calFacto();
    return 0;
}