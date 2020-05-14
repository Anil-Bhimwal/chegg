#include<iostream>
using namespace std;
main()
{
    int f=0,s=1,n,i,N;


    cin>>n;
    while(f<n)
    {

         N=f+s;
         i=f;
            f=s;
            s=N;

        }
        if(f>n)
        {
            cout<<i;
        }
        else
            cout<<f;



    return 0;

}
