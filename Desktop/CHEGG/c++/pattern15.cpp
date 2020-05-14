#include<iostream>
#include<math.h>
using namespace std;
void printPatt(int n);
int main()
{
    int n;
    cin>>n;
      printPatt(n);
}

void printPatt(int n)
{case1: for(int i=1;i<=n;i++)
    {if(n%2!=0){
            if(i<=(n+1)/2)
            {
                for(int k=1;k<=i;k++)
                {
                    cout<<"*";
                }

            }else
            {
                for(int l=i-1;l<n;l++)
                {
                    cout<<"*";

                }
            }

        cout<<"\n";
        }
 else
 {
   n=n+1;
   goto case1;
    }

    //write your code here
}}
