#include<iostream>
using namespace std;
main()
{
    int f=0,s=1,n,i,N;
    cout<<"no. of words:";
    cin>>N;
    cout<<f;

    for(i=1;i<=N-1;i++)
    {
        n=f+s;
        f=s;
        s=n;
        cout<<" "<<f;

    }
    return 0;

}
