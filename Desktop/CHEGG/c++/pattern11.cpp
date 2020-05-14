#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
int k=i;
        for(int j=n;j>=1;j--)
        {
            if(j>=i)
               {
                   cout<<k;
                k++;

               }
            else
                cout<<n;

        }
    cout<<"\n";
    }
}
