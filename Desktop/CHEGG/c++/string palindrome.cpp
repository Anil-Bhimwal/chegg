#include<iostream>
#include<string>

using namespace std;
main()
{int i,j,flag=1;
    char string[50],c;
    cout<<"enter a string(max.of 49 characters)\n"<<endl;
    cin.getline(string,50);
    for( int len=0;string[len]!='\0';++len)

    for(i=0,j=len-1;i<len/2;++i,--j)

        {if(string[i]!=string[j])
       {

        flag=0;
        break;}
}
if(flag=1)
    cout<<"palindrome";
    else
        cout<<"not a palindrome"<<endl;
    return 0;
}
