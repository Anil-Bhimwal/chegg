#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
	cout<<"how many row you want:";
	cin>>n;
	if(n%2!=0)
    {
	case1:for (i=1;i<=(n+1)/2;i++) {
		for (j=i;j<(n+1)/2;j++) {
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) {
			cout<<"*";

		}
		cout<<"\n";
	}
	for (i=(n+1)/2-1;i>=1;i--) {
		for (j=(n+1)/2;j>i;j--) {
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) {
			cout<<"*";
		}
		cout<<"\n";
	}}
	else
      {
         n=n+1;
       goto case1;
      }
	return 0;
}
