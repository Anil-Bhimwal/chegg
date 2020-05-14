#include<iostream>
#include<string>
using namespace std;
int subsequence(string str,string output[])
{
   if(str.size()==0)
   {
       output[0]="";
       return 1;
   }
   string smalloutput[1000];
   int count=subsequence(str.substr(1),smalloutput);
   for(int i=0;i<count;i++)
   {
       output[i]=smalloutput[i];
   }
   for(int i=0;i<count;i++)
   {
       output[count+i]=str[0]+smalloutput[i];
   }
   return 2*count;
}

int main()
{
    string str="xyz";
    string output[1000];
    int count=subsequence(str,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;

    }
}


