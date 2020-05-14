#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>
int bin_to_dec(vector<int> vec)
{
    int n,dec=0,counts=0;
	//only binary numbers
	for(int i=0;i<vec.size();i++)
    {
        dec=dec+vec[i]*pow(2,counts);
        counts++;
    }
    return dec;
}
vector<int> dec_to_bin(int n)
{
    long int a;
    vector<int> ans;
    while(n>0)
    {
        a=n%2;
        n=n/2;
       ans.push_back(a);
    }
    return ans;

}
int main()
{
    int A,B,temp1,temp2,op1=0,op2=0;;
    cout<<"enter A and B:";
    cin>>A>>B;
    temp1=A;
    temp2=B;
    if(A==B)
    {
        cout<<0<<endl;
    }
    vector<int> bin_a=dec_to_bin(A);
    vector<int> bin_b=dec_to_bin(B);

    for(int i=bin_a.size()-1;i>=0;i--)
    {
        cout<<bin_a[i]<<" ";
    }
    while(A<B)
    {
        A++;
        op1++;
    }
    while(bin_to_dec(bin_a)!=B)
    {
        if(bin_to_dec(bin_a)<B)
        {
            unsigned seed = 0;
            shuffle(bin_a.begin(), bin_a.end(), default_random_engine(seed));
        }
    }
     cout<<endl<<bin_to_dec(bin_a);


}
