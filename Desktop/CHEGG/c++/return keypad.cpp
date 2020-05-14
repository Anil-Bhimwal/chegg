#include <string>
#include<iostream>
using namespace std;

int keypadhelper(int num,string output[],string options[])
{
  if(num==0)
   {
     output[0]="";
       return 1;
   }
   int k=0;
  string smalloutput[1000];
  int smallcount=keypadhelper(num/10,smalloutput,options);
  int lastdigit=num%10;
  string lastdigitoptions=options[lastdigit];


  for(int j=0;j<lastdigitoptions.size();j++)
     {
     for(int i=0;i<smallcount;i++)
   {

       output[k++]=smalloutput[i]+lastdigitoptions[j];
     }
   }
  return lastdigitoptions.size()*smallcount;

}




int keypad(int num, string output[])
{
  string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyx"};
  return keypadhelper(num,output,options);

}
int main()
{
    int num;
    string output[1000];
    cin>>num;
    int n=keypad(num,output);
    cout<<n;
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<endl;
    }
}


    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */


