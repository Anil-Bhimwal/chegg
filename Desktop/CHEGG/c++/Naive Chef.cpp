#include<iostream>
using namespace std;
int main()
{
    int T;
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(10);
    //cout<<"enter no. of task:";
    cin>>T;
    int** arr=new int*[T];
    for(int i=0;i<T;i++)
    {
      int N,A,B;
      //cout<<"enter value of N,A and B:";
      cin>>N>>A>>B;
      double temp=N;
        arr[i]=new int[N];
      for(int j=0;j<N;j++)
      {
         // cout<<"enter "<<j+1<<"th number:";
          cin>>arr[i][j];
      }

      double num_of_times_A=0,num_of_times_B=0;
      for(int k=0;k<N;k++)
      {
          if(A==arr[i][k])
          {
             num_of_times_A++;
          }
          if(B==arr[i][k])
          {
              num_of_times_B++;
          }
      }
      double prob_A,prob_B;
      //cout<<num_of_times_A<<" "<<num_of_times_B<<endl;
      prob_A=num_of_times_A/temp;
      prob_B=num_of_times_B/temp;
     // cout<<prob_A<<" "<<prob_B<<endl;
      double ans=prob_A*prob_B;

      cout<<ans<<endl;

    }



}
