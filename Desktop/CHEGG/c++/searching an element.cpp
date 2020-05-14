#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int i,n,m;
    cout<<"how many number would you want to enter:";
    cin>>n;

    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<"enter numbers:";
    for(i=0;i<n;i++)
    {
        cout<< arr[i]<<"\n";
    }
    cout<<"which number would you want to get:";
    cin>>m;
    cout<<arr[m-1];

    return 0;
}
