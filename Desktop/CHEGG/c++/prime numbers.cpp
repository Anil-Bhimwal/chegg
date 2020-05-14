#include<iostream>
using namespace std;
int check_prime(int);
main()
{
int i,n,result;
cout<<"enter the number of prime numbers required\n";
cin>>n;
cout<<"first"<<n<<"prime numbers are:\n";
for(i=0;i<n;i++){
result=check_prime(i);
if(result==1)
cout<<i<<"\n";
}
return 0;
}
int check_prime(int a)
{
int c;
for(c=2;c<=a-1;c++)
{
if(a%c==0)
return 0;}
if(c==a)
return 1;
}
