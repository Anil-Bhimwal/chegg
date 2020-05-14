#include<iostream>
using namespace std;
void xstrcpy(char*,char*);
main()
{

    char source[]="anil";
    char target[20];
    xstrcpy(target,source);
    cout<<"source string"<<":"<<source<<endl;
    cout<<"target string:"<<target<<endl;
    return 0;

}
void xstrcpy(char *t,char*s)
{
    while(*s!='\0')
    {
      *t=*s;
      s++;
      t++;
    }
    *t='\0';

}
