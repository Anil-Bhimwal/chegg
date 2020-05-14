#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,dec=0,rem,counts=0;
	cin>>n;//only binary numbers
	while(n>0)
    {
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,counts);
        counts++;
    }
    cout<<dec;
    return 0;

}

