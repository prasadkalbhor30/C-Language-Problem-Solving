#include <iostream>
using namespace std;
float area(float);
float area(float,float);
float area(double,double);
int main()
{
    float r,l,w;
    double b,h;
    cout<<"Enter radius of a circle : ";
    cin>>r;
    cout<<"Area of a circle = "<<area(r);
    cout<<"Enter length and width of a rectangle: \nLength :";
    cin>>l;
    cout<<"Width :";
    cin>>w;
    cout<<"Area of a rectangle = "<<area(l,w);
    cout<<"Enter base and height of a triangle: \nBase :";
    cin>>b;
    cout<<"Height :";
    cin>>h;
    cout<<"Area of a triangle = "<<area(b,h);
    return 0;
}
float area(float r)
{
    return 3.14*r*r;
}
float area(float b, float h)
{
    return b*h;
}
float area(double b,double h)
{
   return 0.5*b*h;
}
