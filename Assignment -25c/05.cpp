#include <iostream>
using namespace std;
class reverseNum
{
private:
    int x;

public:
    void num(int i) { x = i; }
    int reverse();
};
int reverseNum::reverse()
{
    int i, l, j = x;
    for (i = 1; j > 9; j /= 10)
        i *= 10;
    j = x;
    for (l = 0; j != 0; j /= 10, i /= 10)
        l += ((j % 10) * i);
    return l;
}
int main()
{
    int a;
    reverseNum obj;
    cout << "Enter a number to reverse :";
    cin >> a;
    obj.num(a);
    cout << "Reversed Number : " << obj.reverse();
    return 0;
}