#include<iostream>
using namespace std;

void dfs(int** adjMatrix, int V, int currentVertex, bool* visited){

	cout << currentVertex << " ";
	visited[currentVertex] = true;
	for(int i = 0; i < V; i++){
		if(adjMatrix[currentVertex][i] != 0 && !visited[i]){
			dfs(adjMatrix, V, i, visited);
		}
	}
}


void dfs(int** adjMatrix, int V){
	bool* visited	= new bool[V];
	for(int i = 0; i < V; i++){
		visited[i] = false;
	}
	dfs(adjMatrix, V, 0, visited);

}


int main(){

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
	dfs(adjMatrix, V);
	cout << endl;

}

