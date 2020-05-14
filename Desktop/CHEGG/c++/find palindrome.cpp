#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char string[100],reverse_string[100];
    int i,length=0,check;
    cout<<"\n\tenter a string to check :";
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    cout<<"length of the string'"<<string<<"':"<<length<<endl;
    for(i=length-1;i>=0;i--)
    {
        reverse_string[length-i-1]=string[i];

    }
    for(check=1,i=0;i<length;i++)
    {
        if(reverse_string[i]!=string[i])
            check=0;
    }
    if(check==0)
        cout<<string<<"\tis a palindrome\n"<<endl;
    else
        cout<<string <<"\tis not a palindrome\n"<<endl;

    return 0;

}
