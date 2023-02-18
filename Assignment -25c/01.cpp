#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void setValues(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        cout << real << "+" << imag << "i";
    }
};

int main()
{
    int real, imag;
    cout << "Enter real and imag values of complex number :" << endl;
    cout << "real : ";
    cin >> real;
    cout << "imag : ";
    cin >> imag;
    Complex obj;
    obj.setValues(real, imag);
    obj.showData();
    return 0;
}