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
    void operator++(int d)
    {
        cout<<"d="<<d<<endl;
        a++;
        b++;
    }

    void operator--()
    {
        a--;
        b--;
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
    Complex obj,addobj,subobj;
    obj.setData(real, imag);
    cout<<"Complex number 1 =";
    obj.showData();
    obj++;
    cout<<"incremented complex number = ";
    obj.showData();
    obj.operator--();
    cout<<"decremented complex number = ";
    obj.showData();
    return 0;
}


   