#include <iostream>
using namespace std;
class StaticCount
{
public:
    static int n;

    void staticIncrement() { n++; }
    static void displayResult()
    {
        cout<<"final static : "<<n;
    }
};
int StaticCount::n;

int main()
{
    StaticCount s;
    s.staticIncrement();
    s.staticIncrement();
    s.staticIncrement();
    s.displayResult();
    return 0;
}