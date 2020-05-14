#include<iostream>
using namespace std;


int Sqrt(int x)
{

    if (x == 0 || x == 1)
       return x;

    int i = 1, result = 1;
    while (result < x)
    {
       if (result == x)
          return result;
       i++;
       result = i*i;
    }
    return i-1;
}
int main()
{
    int x ;
  cin>>x;
    cout << Sqrt(x) << endl;
    return 0;
}
