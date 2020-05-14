#include <iostream>
using namespace std;
int main()
{
   long int count=0,i,n,a,b[10000];
    cin>>n;

  while(n>0)
    {

        a=n%2;
        n=n/2;
       b[count]=a;
    count++;

    }
    i=count-1;
  while(i>=0)
  {
    cout<<b[i];
    i--;
  }

    return 0;

}
