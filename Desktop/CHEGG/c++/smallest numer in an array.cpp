#include<iostream>
using namespace std;
main()
{
int a[25],n,i,sml;
int *ptr;
cout<<"how many numbers you wat to enter:";
cin>>n;
cout<<"enter the number:";
for(i=0;i<n;i++)
{
cin>>a[i];
ptr++;
}


ptr=&a[0];
sml=a[0];
for(i=0;i<n;i++)
{
if(sml>(*ptr))//put <sign for greatest number.
sml=*ptr;
ptr++;
}
cout<<"smallest number is:"<<sml;
return 0;
}
