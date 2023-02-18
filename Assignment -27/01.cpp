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
    Complex operator+(Complex x)
    {
        Complex m;
        m.a=a+x.a;
        m.b=b+x.b;
        return m;
    }

    Complex operator-(Complex x)
    {
        Complex m;
        m.a=a-x.a;
        m.b=b-x.b;
        return m;
    }

    Complex operator*(Complex x)
    {
        Complex m;
        m.a=a*x.a;
        m.b=b*x.b;
        return m;
    }

    Complex operator/(Complex x)
    {
        Complex m;
        m.a=a/x.a;
        m.b=b/x.b;
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
    Complex obj,obj1,addobj,subobj,multiobj,divobj;
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
    subobj=obj-obj1;
    multiobj=obj*obj1;
    divobj=obj/obj1;
    cout<<"Added complex number = ";
    addobj.showData();
    cout<<"substracted complex number = ";
    subobj.showData();
    cout<<"multiplied complex number = ";
    multiobj.showData();
    cout<<"divided complex number = ";
    divobj.showData();
    return 0;
}


