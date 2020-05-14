#include <iostream>
using namespace std;

class edge
{
  public:
  int source;
  int desti;
  int weight;
  edge()
  {

  }

};
  void takeInput(int V,int E){
    edge* input=new edge[E];
    for(int i=0;i<E;i++)
    {
      edge obj;
      cin>>obj.source>>obj.desti>>obj.weight;
      input[i]=obj;
    }
  }
  int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;

    takeInput(V,E);

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself

  */

  return 0;
}

