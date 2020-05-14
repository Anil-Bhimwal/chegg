#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int val){
  int start=0;
 int  end=n-1;

  while(start<=end)
  {int mid=(start+end)/2;
    if(arr[mid]==val)
      return mid;
    else if(val<arr[mid])
    {
      end=mid-1;

    }
    else if(val>arr[mid])
    {
      start=mid+1;

    }


  }
  return -1;

}

int main()
{
    int size,start=0,end,num,arr[1000];
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter elements of the matrix:";
    for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<"enter the number:"<<endl;
        cin>>num;
        end=size;

       int index= BinarySearch(arr,size,num);
       cout<<index;

    }
