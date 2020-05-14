#include<iostream>
using namespace std;
main()
{
float n,sum=0.0;
do{
cout<<"enter a number:";
cin>>n;
sum+=n;
}
while(n!=0.0);
cout<<"total sum="<<sum;
return 0;
}
