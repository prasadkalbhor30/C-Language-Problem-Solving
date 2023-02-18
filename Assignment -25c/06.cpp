#include <iostream>
using namespace std;
class Square
{
private:
    int x;
    static int a;

public:
    void num(int i) { x = i; }
    int calSq()
    {
        a++;
        return x * x;
    }
    int funcCallCount() { return a; }
};
int Square::a;
int main()
{
    int a;
    Square obj;
    cout << "Enter a number to calculate square or enter 0 to end  :" << endl;
    cin >> a;
    while (a)
    {
        obj.num(a);
        cout << "Square of number : " << obj.calSq() << endl;
        cout << "Enter a number to calculate square or enter 0 to end  :" << endl;
        cin >> a;
    }
    cout << "Function call count = " << obj.funcCallCount();
    return 0;
}
