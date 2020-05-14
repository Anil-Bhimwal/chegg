#include<bits/stdc++.h>
using namespace std;

struct Point{
    double x, y;
};
int main(){
    struct Point p1= {2, 5};
    struct Point p2= {6, 9};
    double distance= sqrt(pow(p1.x-p2.x , 2)+ pow(p1.y- p2.y , 2));//heron's formula
    cout<< "Distance between P1 and P2 is : "<<distance<<endl;
}
