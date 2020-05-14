#include<iostream>
using namespace std;
void display(char *);
void display(const char);
int main()
{
char *ch1='d';
const char *ch2='c';
display(ch1);
display(ch2);
return 0;
}
void display(char *p)
{cout<<p<<endl;
}
void display(const char *q)
{
cout<<p<<endl;
}
