// arr - input array
// n - size of array
#include<iostream>
using namespace std;
int equilibrium(int*, int );
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int r;
    r=equilibrium(arr,n);
    cout<<r;
}
int equilibrium(int arr[], int n) {
  int i,j;

  while(i<n)
  {int sum1=0,sum2=0;
   j=0;
     while(j<n)
     {
       if(j<i)
      {
        sum1=sum1+arr[j];

      }
      else if(j>i)
      {
        sum2=sum2+arr[j];

      }
   else if(j==i)
      j++;

        j++;
     }

    if(sum1==sum2)
      return i;
   else
     i++;

  }

      return -1;// Write your code here

}

