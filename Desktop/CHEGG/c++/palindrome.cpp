#include<iostream>
using namespace std;
 int main()
{
    int n,temp;

    cin>>n;
    int j=1;
    while(j<=n)
    {int reverse=0;

    temp=j;

    while(temp!=0)
    {
       reverse=reverse*10 +temp%10;
        temp=temp/10;
    }
    if(reverse==j)
        {
            cout<<j<<"\n";
        }
        j++;
    }

    return 0;
}
