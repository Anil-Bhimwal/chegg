#include <iostream>
using namespace std;

int main(){
  int n,a[1000000];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];

  }
  int j=0,odd=0,even=0;
  while(j<n)
  {
    if(j%2==0)
    {even=even+a[j];
    j++;
    }
    else
      {odd=odd+a[j];
      j++;}
  }
  int diff;
  diff=even-odd;
  cout<<diff;
  return 0;
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */

}


