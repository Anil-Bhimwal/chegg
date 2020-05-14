#include <iostream>
using namespace std;

int main() {

	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int size;
	    string S;

	    cin>>size;
	    cin>>S;
	    int *arr=new int (size);
	    for(int j=0;j<size;j++)
	    {
	      cin>>arr[j];
	    }
	    for(int k=0;k<size;k++)
	    {
	        for(int j=0;j<arr[k];j++)
	        {
	            char newc;
	            int num=S[j]-'a';
	            if(num+1>26)
	            {
	                newc ='a';
	            }
	            else
	            newc=num +'a'+1;
	            S[j]=newc;

	        }
	    }
	 for(int i=0;S[i]!='\0';i++){
	   cout<< S[i];
	 }
	 cout<<endl;
	}

	//code
	return 0;
}

