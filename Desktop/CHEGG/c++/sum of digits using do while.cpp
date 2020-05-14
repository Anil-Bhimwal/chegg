#include<iostream>
using namespace std;
main()
{
int sum=0,remainder,n;
cout<<"enter any number:";
cin>>n;
do
{
remainder=n%10;
sum=sum+remainder;
n=n/10;
}
while(n!=0);
cout<<"sum of digits:"<<sum<<endl;
return 0;}
