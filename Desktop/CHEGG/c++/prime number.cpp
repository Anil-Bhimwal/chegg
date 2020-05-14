#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter n:";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            return 0;
        }
        else
            i++;
    }        cout<<"prime";


   return 0;
}
