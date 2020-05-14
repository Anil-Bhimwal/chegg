#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
        return (a);
        else
    if(a%b==0)
    return (b);
        if(b%a==0)
        return (a);
    else if(a<b)
        return (gcd(a,b%a));
    else
        return (gcd(a%b,b));
    }
int main()
{
    int a,b;
    cout<<"enter two numbers:\t";
    cin>>a>>b;
    cout<<"greatest common devisor:\t"<<gcd(a,b);
    return 0;
}
