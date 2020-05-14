#include<iostream>
using namespace std;
int main()
{

int num,size,arr[1000];
cout<<"enter the size:"<<endl;
cin>>size;
cout<<"enter elements:"<<endl;
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<"enter the number:"<<endl;
cin>>num;
for(int i=0;i<size;i++)
{
    if(arr[i]==num)
        {cout<<i;
        return 0;
        }
    else{
        i++;
    }
}
return 0;
}
