#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of Nodes you want to store: ";
    cin >> n;
    cout<<endl;
    unordered_map<char, int>label;
    cout<<"label all the nodes"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"what is the label for "<<i<<"? ";
        char c;
        cin>>c;
        label[c]= i;
        cout<<endl;
    }
    // Taking graph input and creating an adjacency list for storing the Graph
    unordered_map<int, vector<int>* > adjacencyList;
    for(int i = 0; i < n; i++) {
        vector<int> *v = new vector<int>;
        adjacencyList[i] = v;
    }
    int check = 1;
    while(check !=-1) {
        cout<<"Define an edge by listing a pair of vertices, example-> A B. "<<endl;
        char source, dest;
        cin >> source >> dest;
        if(label[source]&&label[dest]){
            cout<<"Added Edge "<<source<<"->"<<dest<<endl;
            adjacencyList[label[source]] -> push_back(label[dest]);
            adjacencyList[label[dest]] -> push_back(label[source]);
        }else{
            cout<<" Node names are not valid"<<endl;
        }
        cout<<"To stop-> press -1 otherwise press 1 "<<endl;
        cin>>check;


    }


}
