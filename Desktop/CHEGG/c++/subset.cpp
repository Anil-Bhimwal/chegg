#include<iostream>
using namespace std;/*
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/


int subsethelper(int input[],int start,int end,int output[1000][100])
{
  {
  if(start==end)
    output[0][0]=0;
  return 1;
  }



int smalloutput[1000][100];
int smallcount=subsethelper(input,start+1,end,smalloutput);
  int row=0;
for(int i=0;i<smallcount;i++)
{
  for(int j=0;j<smalloutput[i][0];j++)
  {
    output[row][j]=smalloutput[i][j];

  }
   row++;
}
  for(int i=0;i<smallcount;i++)
  {
    output[row][0] = smalloutput[i][0] + 1;
     output[row][1]=input[start];
    for(int j=1;j<=smalloutput[i][0];j++)
    {

       output[row][j+1]=smalloutput[i][j];

    }
     row++;
}
return row;
}

int subset(int input[], int size, int output[][100]) {

  int start=0;
  return subsethelper(input,start,size,output);

    // Write your code here

}

int main()
{
    int start=0,size,output[1000][100];
    int input[10000];
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    int row= subset(input,size,output);
    cout<<row;
}
