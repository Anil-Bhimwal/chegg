void SortZeroesAndOne(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Update in the given array itself. Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */

 int i=0,j=n-1,t;


  while(i<n-1&&j>=0)
  {
    if(arr[i]==0)
    {
      i++;
    }
   else if(arr[i]==1)
    {

     while(j>i)
    {
       if(arr[j]==0)
    {
      t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
      i++;
      j--;
         break;

    }
     else{
       j--;
     }

    }
   }
  }
}
