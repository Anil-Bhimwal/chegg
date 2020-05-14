#include<iostream>
using namespace std;
main()
{
int remainder,sum=0,n;
cout<<"enter any number:";
cin>>n;
while(n!=0)
{
remainder=n%10;// modulus is used for remainder
sum=sum+remainder;

n=n/10;}
cout<<"sum of digits"<<"="<<sum<<endl;
return 0;
}
