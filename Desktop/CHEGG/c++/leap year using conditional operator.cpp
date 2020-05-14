#include<iostream>
using namespace std;
main()
{
int year;
cout<<"enter a year";
cin>>year;
if(year%400==0||year%100!=0&&year%4==0)
    cout<<"leap year"<<endl;
else
    cout<<"not a leap year"<<endl;

return 0;
}
