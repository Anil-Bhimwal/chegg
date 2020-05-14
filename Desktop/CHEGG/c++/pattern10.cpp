#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";

    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {

            if(j<=i)
            {
                cout<<i;
            }

             else
                cout<<j;
        }

     cout<<"\n"; }

      return 0;
}
