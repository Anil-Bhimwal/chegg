#include<iostream>
using namespace std;
int main()
{
    int n;
    int ch;
    cin>>n;
    cin>>ch;
    switch(ch)
    {
        case 1:{int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
            cout<<sum;
            break;
        }
        case 2:
            {
                int prod=1;
                for(int j=1;j<=n;j++)
                {
                    prod=prod*j;
                }
                cout<<prod;
                break;

            }
            default:cout<<"-1";
    }
    return 0;
}
