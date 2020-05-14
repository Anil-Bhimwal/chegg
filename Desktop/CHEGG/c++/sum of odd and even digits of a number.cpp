#include<iostream>
using namespace std;

int main() {int num,odd=0,even=0,rem,digit,input;
            cin>>num;
            input=num;
            while(num>0)
            {
              digit=num%10;
              num=num/10;
              rem=digit%2;
              if(rem!=0)
                odd=odd+digit;
              else
                even=even+digit;
            }
            cout<<even<<" "<<odd;
            return 0;
	// Write your code here

}
