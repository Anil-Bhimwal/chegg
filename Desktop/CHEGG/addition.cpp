#include<bits/stdc++.h>
using namespace std;
int main(){
    string num1, num2;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"enter second number ";
    cin>>num2;
    //Empty string to store answer
    string ans="";


    // Before proceeding further, make sure length of num2 is larger.
    if (num1.length() > num2.length())
        swap(num1, num2);
    int n1= num1.length();
    int n2= num2.length();
    //reverse both the strings
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of current digits and carry
        int sum = ((num1[i]-'0')+(num2[i]-'0')+carry);
        ans.push_back(sum%10 + '0');

        // Calculate carry for next step
        carry = sum/10;
    }
    // Add remaining digits of larger number which is second number.
    for (int i=n1; i<n2; i++)
    {
        int sum = ((num2[i]-'0')+carry);
        ans.push_back(sum%10 + '0');
        carry = sum/10;
    }
    // Add remaining carry
    if (carry)
        ans.push_back(carry+'0');

    // reverse resultant string
    reverse(ans.begin(), ans.end());

    // checking whether ans string contains more than 20 digits or not
    if(ans.length()>20){
        cout<<"your result contains more than 20 digits and the result is "<<ans<<endl;
    }else{
        cout<<"sum of two number is "<<ans<<endl;
    }
    return 0;
}
