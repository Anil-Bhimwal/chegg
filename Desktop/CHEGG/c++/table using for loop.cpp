#include<iostream>
using namespace std;
main()
{
int n,i,p;
cout<<"enter no. :";
cin>>n;
for(i=1;i<=10;i++)
{p=i*n;
 cout <<p<<endl;
if(i==10)
break;
}
return 0;
}
