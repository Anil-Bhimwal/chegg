#include<iostream>
#include<string.h>
using namespace std;
int check_vowel(char);
main()
{
    char s[100],t[100];
    int i,j=0;

    cout<<"enter a string :";
    cin>>s;
    for(i=0;i!='\0';i++)
    {

             if(check_vowel(s[i]) == 0) {       //not a vowel
      t[j] = s[i];
      j++;
    }
  }

  t[j] = '\0';

  strcpy(s, t);    //We are changing initial string
  cout <<"strimg after removing vowels:";
  cout<<s;
   return 0;

}

int check_vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }

    }

