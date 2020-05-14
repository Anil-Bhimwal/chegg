#include<iostream>
using namespace std;
int i=10;

int main()
{
    int i=20;
    cout <<endl <<i<<" "<<::i;
    {
        int i=30;
        cout<<endl<<i<<" "<<::i;
    }cout<<endl<<i<<" "<<::i<<endl;
    return 0;
}
