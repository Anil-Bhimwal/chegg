#include<iostream>
using namespace std;

int main() {
	int i, j, k,n;
	cout<<"how many row you want:";
	cin>>n;
	if(n%2!=0)
    {
	for (i=1;i<=(n+1)/2;i++) {
		for (j=i;j<(n+1)/2;j++) {
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) {
			cout<<k;;
		}
		cout<<"\n";
	}
	for (i=(n+1)/2-1;i>=1;i--) {
		for (j=(n+1)/2;j>i;j--) {
			cout<<" ";
		}
		for (k=1;k<(i*2);k++) {
			cout<<k;
		}
		cout<<"\n";
	}}
	else
       cout<<"you can't print even row pattern of this type";
	return 0;
}
