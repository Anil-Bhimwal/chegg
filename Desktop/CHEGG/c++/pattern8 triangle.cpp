#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=i-1;k>=0;k--)
        {
            cout<<k;
        }

        for(int revnum=1;revnum<=i-1;revnum++)
        {
            cout<<revnum;
        }
        cout<<"\n";
    }

    return 0;

}
