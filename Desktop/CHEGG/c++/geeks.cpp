#include<iostream>
using namespace std;
#include<algorithm>
bool compare(pair<int,int>a,pair<int,int>b){
return ((a.first+a.second)<(b.first+b.second));
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int b;
	    cin>>b;
	    int a[100000];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   vector<pair<int,int> >v;
	    for(int i=0;i<n;i++){
	        v.push_back(make_pair(a[i],i+1));
	    }
	    int k=n;
	    sort(v.begin(),v.end(),compare);
	    while(1){
                int count=0;
        int sum=0;
	    for(int i=1;i<=n;i++){
                count++;
            sum+=v[i-1].first+(v[i-1].second*k);
	    }
	    if(sum<=b){
            cout<<count<<" "<<sum<<endl;
            break;
	    }
	    else{
            k=k-1;
            n=n-1;
	    }
	}

}
return 0;
}
