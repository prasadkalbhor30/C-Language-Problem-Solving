#include <iostream>
using namespace std;
class Bill
{
private:
    char name[30];
    int unit;
public:
    void get(char N[], int U)
    {
        int i;
        for(i=0;N[i];i++)
            name[i]=N[i];
        unit=U;
    }
    void calculeteBill()
    {
        switch (unit)
        {
            case 0 ... 100:
                cout<<"0 to 100";
            case 101 ... 200:
                cout<<"200";
            default:
                return unit*3;
        }
    } 
};
int main()
{
    int u;
    char n[30];
    cout<<"Enter name of the customer : ";
    fgets(n,30,stdin);
    cout<<"Enter units : ";
    cin>>u;
    Bill b;
    b.get(n,u);
    b.calculeteBill();
    return 0;
}