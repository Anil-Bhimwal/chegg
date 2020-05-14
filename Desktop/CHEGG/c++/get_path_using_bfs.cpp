#include<queue>
#include <iostream>
#include<unordered_map>
using namespace std;
int bfs(int ** adjmat,int V,bool* visited,int s1,int s2,unordered_map<int,int>&map)
{
  queue<int> que;
  que.push(s1);
  visited[s1] = true;
  while(!que.empty())
  {
    int cv=que.front();
    que.pop();
	for(int i = 0; i < V; i++){
		if(adjmat[cv][i] != 0 && !visited[i]){
          if(i==s2)
          {
            que.push(i);
          	map.at(i)=cv;
          	visited[i] = true;
            return i;
          }
          else{
            que.push(i);
          	map.at(i)=cv;
          	visited[i] = true;
          }
		}
	}

  }
  return -1;
}


int main() {
    int V, E;
    cin >> V >> E;
 int** adjMatrix = new int*[V];
	for(int i = 0; i < V; i++){
		adjMatrix[i] = new int[V];
	}

	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			adjMatrix[i][j] = 0;
		}
	}

	for(int i = 0; i < E; i++){
		int v1, v2;
		cin >> v1 >> v2;
		adjMatrix[v1][v2] = 1;
		adjMatrix[v2][v1] = 1;
	}
  bool*visited=new bool[V];
  for(int i=0;i<V;i++)
  {
    visited[i]=false;
  }
  int s1,s2;
  cin>>s1>>s2;
  unordered_map<int, int>map;
	int i=bfs(adjMatrix,V,visited,s1,s2,map);
  if(i==s2)
  {
     while(i!=s1)
     {
       cout<<i<<" ";
       i=map.at(i);
     }
    cout<<i<<endl;
    return 0;
  }
  else
return 0;
}
