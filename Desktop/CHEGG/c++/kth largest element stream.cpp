#include <iostream>
using namespace std;
#include<queue>
int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int k,n,j=0,l;
        cin>>k>>n;
        int * arr=new int[n];
        for(int m=0;m<n;m++)
        {
            cin>>arr[m];
        }
        int output[n];
        for(;j<k-1;j++)
        {
            output[j]=-1;
        }
        for( l=0;l<k;l++)
        {
            pq.push(arr[l]);
        }
        for(;l<=n;l++)
        {
            output[j++]=pq.top();
            pq.pop();
            pq.push(arr[l]);
        }

        for(int u=0;u<n;u++)
        {
            cout<<output[u]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
