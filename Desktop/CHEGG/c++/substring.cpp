// input - given string
// You need to update in the input string itself. No need to return or print anything
#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char*);
void removeConsecutiveDuplicates(char input[]) {
  int i=0, k=0;
  input[k++]=input[i++];
  while(input[i]!='\0');
  {
   if(input[i]!=input[i+1]&&input[k]!=input[i])
   {input[k]=input[i];
    i++;
    k++;
   }

    else if(input[i]==input[i+1])
      {if(input[k]!=input[i])
      {
        input[k]=input[i];
          i++;
      }
       i++;
      }
     else if(input[k]==input[i])
     {i++;
     }
     else if  (input[i]!=input[i+1])
     {
       input[k]=input[i++];
       k++;
      }
  }


  input[k]='\0';
  cout<<input;
}// Write your code here

int main()
{
    char input[100];
    cin>>input;
    removeConsecutiveDuplicates( input);
}


