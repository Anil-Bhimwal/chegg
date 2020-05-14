#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
main()
{
char string1[50],string2[50];
cout<<"enter string"<<endl;
//gets(string1);
//gets(string2);
cin.getline(string1,50);
cin.get(string2,50);

if(strlen(string1)==strlen(string2))
cout<<"strings have same numbers of characters";
else
cout<<"strings are not equal to each other;";
return 0;
}
