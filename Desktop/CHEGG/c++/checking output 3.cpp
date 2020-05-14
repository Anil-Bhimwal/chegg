#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int size;
        cin>>size;
        int *arr=new int[size];
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        int parant=0;
        bool ans=true;
        while(parant<size){
            int left=2*parant+1;
            int right=left+1;

            if(left<size)
            {
               if( arr[left]<arr[parant])
            {
                ans =true;
            }
            else
            ans=false;
            }

            if(ans==false)
            {
                cout<<"0"<<endl;
                break;
            }

            if(right<size)
            {
               if( arr[right]<arr[parant])
            {
                ans =true;
            }
            else
            ans=false;
            }


            if(ans==false)
            {
                cout<<"0";
                break;
            }
            parant++;
        }
        if(ans==true)
        {
            cout<<"1"<<endl;
        }


    }
	//code
	return 0;
}
