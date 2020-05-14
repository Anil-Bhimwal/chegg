#include<iostream>
using namespace std;
main()
{
char ch;
cout<<"enter a character:";
cin>>ch;
switch(ch)
{
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
cout<<ch  <<"\n \tis a vowel.";
break;
/*if ch matches any case then t prints and breaks he executin*/
default:
cout<<ch<<"is not vowel.\n";
/*if the ch is not from the cases then prints ch is not a vowel*/
}
return 0;
}
