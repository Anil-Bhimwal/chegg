#include<iostream>
using namespace std;
int display(int,int);
main()
{
int result;
result=display(20,50);
cout<<"result is="<<result<<endl;
return 0;
}
int display(int a,int b)
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return a+b;
}
