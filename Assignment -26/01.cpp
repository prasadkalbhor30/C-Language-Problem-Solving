#include <iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int r, int i){a = r,b = i;}
    void showData()
    {
        cout << a << "+" << b << "i"<<endl;
    }
    Complex add(Complex x)
    {
        Complex m;
        m.a=a+x.a;
        m.b=b+x.b;
        return m;
    }
};

int main()
{
    int real, imag;
    cout << "Enter real and imag values for complex number 1 :" << endl;
    cout << "real : ";
    cin >> real;
    cout << "imag : ";
    cin >> imag;
    Complex obj,obj1,obj3;
    obj.setData(real, imag);
    cout<<"Complex number 1 =";
    obj.showData();
    cout << "Enter real and imag values for complex number 2 :" << endl;
    cout << "real : ";
    cin >> real;
    cout << "imag : ";
    cin >> imag;
    obj1.setData(real, imag);
    cout<<"Complex number 2 =";
    obj1.showData();
    obj3=obj.add(obj1);
    cout<<"Added complex number =";
    obj3.showData();
    return 0;
}