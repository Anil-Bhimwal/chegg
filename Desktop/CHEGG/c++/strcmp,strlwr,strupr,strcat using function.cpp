#include<iostream>
#include<string.h>
using namespace std;
char xstrupr(char*);
char xstrlwr(char*);
char xstrcmp(char*,char*);
char xstrcat(char*,char*);
main()
{
    char str1[100]="classy information";
    char str2[100]="Desk";
    int l;

    xstrupr(str1);
    cout<<"\n\tconversion to upper case:\n\t"<<str1;

    xstrlwr(str2);
    cout<<"\n\tconversion to lower case:\n\t"<<str2;

   l= xstrcmp(str1,str2);
    cout<<"\n\t comperison of strings:\n\t"<<l;

    xstrcat(str1,str2);
    cout<<"\n\tconcatasion:"<<str1;

    return 0;
}
char xstrupr(char*s)
{
    while(*s!='\0')
    {
        if(*s>=97&&*s<=122)
            *s=*s-32;
        s++;
    }
}
char xstrlwr(char*s)
{
    while(*s>=65&&*s<=90)
    {
        *s=*s+32;
        s++;

    }
}
 char xstrcmp(char *s,char *t)
{
    while(*s==*t)
    {
        if(*s=='\0'&&*t=='\0')
            return(0);
        else
          {
            s++;
            t++;
          }
          return(*s-*t);

    }
}
char xstrcat(char *s1,char*s2)
{
    s1=s1+strlen(s1);
    while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';

}
