#include<iostream>
using namespace std;
int sum(int a=0,int b=0)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a=90,b;

    int result=sum(a);
    cout<<result<<endl;
    return 0;

}
