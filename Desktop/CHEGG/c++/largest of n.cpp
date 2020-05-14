#include<iostream>
using namespace std;
int main()
{
  int i=1,n,l=0,counts=1;
cout<<"enter n";
cin>>n;
while(counts<=n)
{
    int a;
    cout<<"enter a:";
    cin>>a;
    if(l<a)
    {
        l=a;
        counts++;
    }
    else
        counts++;
}cout<<l;
    return 0;
}
