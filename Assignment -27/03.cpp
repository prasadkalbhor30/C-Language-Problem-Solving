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
    friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex a,Complex b)
{
    Complex temp;
    temp.a=a.a+a.b;
    temp.b=b.a+b.b;
    return temp;
}
int main()
{
    int real, imag;
    cout << "Enter real and imag values for complex number 1 :" << endl;
    cout << "real : ";
    cin >> real;
    cout << "imag : ";
    cin >> imag;
    Complex obj,obj1,addobj;
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
    addobj=obj+obj1;
    cout<<"Added complex number = ";
    addobj.showData();
    return 0;
}