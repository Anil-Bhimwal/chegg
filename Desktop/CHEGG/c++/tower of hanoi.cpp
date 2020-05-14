#include<iostream>
#include<stdio.h>

using namespace std;
void toh(int n,char beg,char aux,char End)
{
    if(n>=1)
    {
        toh(n-1,beg,End,aux);
        cout<<beg<<"to"<<End<<endl;
        toh(n-1,aux,beg,End);

    }
}
main()
{
    int n;char beg, aux, End;
    cout<<"\n \tenter three tower names like a b c:";
    cin>>beg>>aux>>End;
    cout<<"number of disk:";
    cin>>n;
    toh(n,beg,aux,End);
    return 0;
}
