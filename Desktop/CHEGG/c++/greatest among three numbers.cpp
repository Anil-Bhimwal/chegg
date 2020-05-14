#include<iostream>
using namespace std;
main()
{
int a,b,c;
cout<<"\nenter three numbers:";
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<"a is gratest"<<endl;
else if(b>c)
cout<<"b is greatest"<<endl;
else
cout<<"c is greatest"<<endl;
return 0;
}
