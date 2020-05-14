#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>V;
    V.push_back(5);
    V.push_back(4);
    V.push_back(0);
    V.push_back(-2);
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0;i<V.size();i++){
        q.push(V[i]);
    }

    for(int i=0;q.size()>0;i++){
        cout<<q.top()<<endl;
        q.pop();
    }
    return 0;
}
