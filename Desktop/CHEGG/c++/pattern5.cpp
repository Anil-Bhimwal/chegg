#include<iostream>
using namespace std;
main()
{
    int i,n;
    cout<<"enter no. of rows";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        int spaces=1;
        while(spaces<=(n-i))
        {


            cout<<" ";
            spaces++;

        }
        int value=i,counts=1;
    while(counts<=i)
        {cout<<value;
        counts++;
        value++;
        }
        int decvalue=2*i-2;
        while(decvalue>=i)
        {
            cout<<decvalue;
            decvalue--;

        }
        cout<<"\n";
    }


        return 0;}


