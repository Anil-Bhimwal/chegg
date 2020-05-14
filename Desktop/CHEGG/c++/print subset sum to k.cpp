void helper(int input[],int size,int k,int output[],int m)
{
  if(size==0)
  {
    if(k==0)
    {
      for(int i=0;i<m;i++)
        cout<<output[i]<<" ";
      cout<<endl;
      return;
    }
    else return;
  }
  helper(input+1,size-1,k,output,m);
  int newOP[m+1];
  for(int i=0;i<m;i++)
    newOP[i]=output[i];
  newOP[m]=input[0];
  helper(input+1,size-1,k-input[0],newOP,m+1);
}
void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
  int output[100];
  helper(input,size,k,output,0);
}
