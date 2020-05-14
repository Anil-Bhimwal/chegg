#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    if(n>1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==0)
                    cout<<"1";
                else if(j==0||j==i)
                cout<<"1";
                else
                    cout<<"2";

            }
            cout<<"\n";

        }
    }
     return 0;
}
