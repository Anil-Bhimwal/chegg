#include<iostream>
using namespace std;
main()
{
    static char *s[]={"we will teach you how to....",
    "move a mountain",
    "level a building",
    "erase the past",
    "make a million",
    "....all through c!"
    };
    char *p;
    int i,count=0;
    for(i=0;i<=5;i++)
    {
        p=s[i];
        while(*p)
        {
            cout<<*p;
            if(*p=='e')
                count++;
            p++;

        }
        cout<<"\n";

    }
    cout<<"\n\n total number of 'e'="<<count<<endl;
    return 0;
}
