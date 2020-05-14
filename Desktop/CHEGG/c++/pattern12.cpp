#include<iostream>
using namespace std;
int main()
{
    int y,n;
    char ch;

    cin>>n;
    for(int i=n;i>=1;i--)
    {int k=1;
        for(  ch='A';k<=i;ch++)
           {
               cout<<ch;
            k++;

           }
           y=--ch;

               int h=i+1;
               for(char ch1=y;h<=(2*i);ch1--)
               {
                   cout<<ch1;
                   h++;
               }

             cout<<"\n";
       }

    return 0;
      }

