#include<iostream>
using namespace std;
void intersection(int*, int*, int , int );
int main()
{
    int size1,size2;
    cin>>size1>>size2;
    int ar1[size1],ar2[size2];
    for(int i=1;i<=size1;i++)
    {
        cin>>ar1[i];
    }
     for(int j=1;j<=size2;j++)
    {
        cin>>ar2[j];
    }
    intersection( ar1, ar2,size1,size2);
}
// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

void intersection(int input1[], int input2[], int size1, int size2) {
   int i=0,j,k=0,a[1000000];
  j=0;
  while(i<size1)
  {

     while(j<size2)
     {
       while(k<size2){
                if(input1[i]==input2[j]&&j!=a[k]){
                    cout<<input1[i]<<"\n";
                  a[k++]=j;
                  i++;
                }



       else
       j++;

            }



   } i++;

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */

}}
