#include<iostream>
using namespace std;
main()
{
int r;
long number,c,sum=0,temp;
cout<<"enter an integer upto which you want to find armstrong number:";
cin>>number;
cout<<"following armstrong numbers are found from 0 to"<<number<<"\n";
for(c=1;c<=number;c++)
{
temp=c;
while(temp!=0)
{r=temp%10;
sum=sum+r*r*r;
temp=temp/10;
}
if(c==sum)
cout<<c<<"\n";
sum=0;
}
return 0;
}
