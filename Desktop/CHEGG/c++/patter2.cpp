#include<iostream>
using namespace std;
main()
{
int i,j,k;
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++){
if(i==1||i==5||j==1||j==5)
{cout<<1;
}
else
cout<<" ";}
cout<<"\n";
}
return 0;
}
