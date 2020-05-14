#include<iostream>
using namespace std;

 long countofpairs(int n,int m)
{int count =0;
	for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;)
      {
        if((i+j)%5==0)
        {
          j=j+5;
          count++;
        }
        else
          j++;
      }
    }
return count;
}
int main()
{
    int n,m;
    cin>>n>>m;
    long z= countofpairs(n,m);
    cout<<z;

}

