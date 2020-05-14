#include<iostream>
using namespace std;
int main()
{int n,i,j;
     cin>>n;
    int k=1,m=n-1,l=1,h=n-1;

    for( i=1;i<=n;i++)
    {
        for( j=1;j<i;j++)
        {
            cout<<" ";
        }
        cout<<i;
        for( j=k;j<2*(n-1);j++)
        {
            cout<<" ";

        }
        if(i<n)
        {
            cout<<i;
        }
        cout<<endl;
        k+=2;

    }
      for(i=n-1; i>=1; i--)
    {

        for(j=1; j<i; j++)
        {
         cout<<" ";
        }

        cout<< i;


        for(j=1; j<=((n- i ) * 2 - 1); j++)
        {
           cout<<" ";
        }

      cout<< i;


        cout<<"\n";
    }}


