#include<iostream>
using namespace std;
 main()
{
 int i(20);//class constructor notetion
i=19;
const int &j=i;
cout<<'\n'<<i<<"j\n"<<j;
i=20;
cout<<"i="<<i<<"j="<<j;
return 0;
}
