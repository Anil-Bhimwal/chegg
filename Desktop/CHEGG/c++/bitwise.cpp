#include<vector>
template<typename T>
#include<iostream>
using namspacce std;
int main()
{
    int x;
    cout<<"enter any number:";
    cin>>x;
     vector<bool> bin;
    while (x != 0)
    {
        bin.push_back(x&1);
        x >>= 1;
    }
    for(int i=0;i<bin.size();i++)
    {
        cout<<bin[i]<<endl;
    }

}
