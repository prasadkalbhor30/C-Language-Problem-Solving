#include <iostream>
using namespace std;
class Cube
{
private:
    float a;
public:
    Cube(float i){ a=i; }

    float volume()
    {
        float v;
        v=a*a*a;
        return v;
    }
};
int main()
{
    float n,V;
    cout<<"Enter length of the cube : ";
    cin>>n;
    Cube obj(n);
    V=obj.volume();
    cout << "Volume of cube : "<<V;
    return 0;
}