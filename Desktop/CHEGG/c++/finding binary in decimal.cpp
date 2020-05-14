#include<iostream>
using namespace std;

int countOfNumbers(int n)
{
   int counts=0,a,b[1000];
  for(int i=1;i<=n;i++)
    {int j=0;
    while(i>0)
    {a=i%10;
     i=i/10;
     b[j]=a;
     j++;
    }
     j=j-1;
     while(j>=0)
     {if(b[j]==0||b[j]==1)
     {
       counts++;
       j--;
     }
     else
     {i++;
     }
     }



    }
 return counts;
 }
int main()
{
    int n;
    cin>>n;
    int z=countOfNumbers(n);
    cout<<z;

}

