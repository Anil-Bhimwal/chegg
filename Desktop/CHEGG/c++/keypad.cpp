#include <iostream>
#include <string>
using namespace std;

string helper2(int n)
{
  string s[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  return s[n];
}

void helper(int num,string output)
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    string str=helper2(num%10);

    helper(num/10,str[0]+output);
    helper(num/10,str[1]+output);
    helper(num/10,str[2]+output);
    if(num%10==7 || num%10==9)
        helper(num/10,str[3]+output);
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
  string output="";
  helper(num,output);
}
