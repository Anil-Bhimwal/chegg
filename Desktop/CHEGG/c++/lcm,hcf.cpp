#inclde<iostream>
using namespace std;
name()
{
    int n,reverse=0,temp;
    cout<<"enter a number to check if it is a palindrome or not\n\t";
    cin>>n;
    temp=p;
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;
    }
    if(n==reverse)
        cout<<n<<"is a palindrome number.\n\t";
    elsecout<<n<<"is not a palindrome.\n\t";
    return 0;
}
