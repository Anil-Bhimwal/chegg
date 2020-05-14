#include<iostream>
#include<math.h>
using namespace std;
int function(int,int,double);
main()
{
int sum,avg;
double stdev;

function(sum,avg,stdev);
cout<<"sum:"<<sum<<"average:"<<avg<<"standered deviation:"<<stdev;
return 0;
}
int function(int*sum,int*avg,double*stdev)
{
int n1,n2,n3,n4,n5;
cout<<"enter five numbers:";
cin>>n1>>n2>>n3>>n4>>n5;
*sum=n1+n2+n3+n4+n5;
*avg=*sum/5;
*stdev=sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}
