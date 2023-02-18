#include <iostream>
using namespace std;
class Box
{
private:
    float length,breadth,height;

public:
    Box(int x, int y, int z) {  length= x, breadth= y, height= z; }
    float volume()
    {
        float v;
        v=length*breadth*height;
        return v;
    }
};

int main()
{
    float m, n, l;
    cout << "Enter length,breadth,height :" << endl;
    cin >> m >> n >> l;
    Box obj(m,n,l);
    cout << "Box volume = " << obj.volume() << endl;
    return 0;
}