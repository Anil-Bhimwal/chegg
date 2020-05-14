#include<iostream>
using namespace std;
main()
{
int arr[25],i,j,k,step;
for(i=0;i<=24;i++)
{cout<<"enter the 25 numbers:";
cin>>arr[i];
}
for(i=0;i<=24;i++)
{
    if(arr[i]%2==0)
    {j=arr[i];
    cout<<"\n\teven number"<<j;


    }else

    k=arr[i];
    cout<<"\n\todd number"<<k;

}
return 0;
}

