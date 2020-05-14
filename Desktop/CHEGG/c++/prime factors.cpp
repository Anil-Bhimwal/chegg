#include<iostream>
using namespace std;
int prime(int);
main()
{
int num;
cout <<"enter a nmber";
cin>>num;
prime(num);
return 0;


}
int prime(int num)
{
int i=2;
cout<<"prime factor of "<<num<<"are:"<<"\n";
while(num!=0){
if(num%i==0)
{cout<<i;}

else

{i++;
continue;}
num=num/i;
}
return 0; }
