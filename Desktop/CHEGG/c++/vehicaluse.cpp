#include<iostream>
using namespace std;
#include "Vehicle.cpp"
#include "car.cpp"
int main()
{
    Vehicle v;
    /*cout<<"enter car numtyres"<<endl;
    cin>>v.numtyres;*/
    cout<<"enter color "<<endl;
    cin>>v.color;
    //cout<<"numtyres"<<v.numtyres<<endl;
    cout<<"color"<<v.color<<endl;
    car c;
    cout<<"enter car numgear"<<endl;
    cin>>c.numgear;
    cout<<"numgear"<<c.numgear;
    return 0;

}
