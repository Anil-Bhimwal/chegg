#include<iostream>
#include<math.h>
using namespace std;
double geometricSum(int k) {
  if(k==0)
    return 1;
    return  (1/pow(2,k)) + geometricSum(k-1);

    // Write your code here

}
int main()
{
    int k;
    cin>>k;
    double result=geometricSum(k);
    cout<<result;
}


