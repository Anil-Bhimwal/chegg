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
{int k=1;
    for(int i=1;i<=n;i++)
    {
      for(int j=1,l=0;j<=i;j++,l++)
      {
        if(i%2!=0)
        {
          cout<<k<<" ";
        }
        else

          {
          cout<<(k+i)-j-l<<" ";
          }
        k++;
      }
      cout<<"\n";
    }
}
