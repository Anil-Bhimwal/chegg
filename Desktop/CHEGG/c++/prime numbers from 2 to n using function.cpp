#include<iostream>
using namespace std;
void printprime(int );
main()

{
   int n;
    cout<<"enter n:";
    cin>>n;
    printprime(n);
}    void printprime(int n)
    {
 int i,j=2,flag=0;

    while(j<=n)
    {   i=2;
    flag=0;
        while(i<j)
        {
            if(j%i==0)
            {
               // j++;
               flag=1;
               break;
            }
            i++;
        }
        if(flag==0)
        {
             cout<<j;
        }


        j++;
    }
    }
