#include <iostream>
using namespace std;
class largestNum
{
private:
    int x, y, z;

public:
    void nums(int i, int j, int k) { x = i, y = j, z = k; }
    int largeNum();
};
int largestNum::largeNum()
{
    return x > y ? x : (y > z ? y : z);
}
int main()
{
    int a, b, c;
    largestNum obj;
    cout << "Enter three numbers to find largest number between them :";
    cin >> a >> b >> c;
    obj.nums(a, b, c);
    cout << "Largest Number : " << obj.largeNum();
    return 0;
}