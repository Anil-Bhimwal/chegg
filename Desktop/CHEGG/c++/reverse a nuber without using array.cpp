#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int number,rev_number,a=0,b,n,d;
    cout<<"how many digit number would you want to enter";
    cin>>d;
    cout<<"enter any number";
    cin>>number;
    for(int i=0;i<d;i++)
    {a=a*10+number%10;
    b=number/10;
    number=b;
    }
    cout<<a;
    return 0;

}
