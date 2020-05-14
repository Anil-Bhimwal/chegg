#include<iostream>
using namespace std;

int main() {int n,N,a,i=1;
            cin>>n;
            for(N=1;i<=n;N++)
            {a=3*N+2;
            if(a%4==0)
            {
              int M=N+1;
              a=3*M+2;
              cout<<a<<" ";
              N=N+1;

            }
            else
            cout<<a<<" ";
            i++;
            }
	return 0;

}

