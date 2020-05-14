#include<iostream>
using namespace std;
main()
{
int sales[5][12];
int i,j,total=0;
for(i=0;i<5;i++)
{cout<<"enter sales for salesman"<<i+1<<":\n";
for(j=0;j<12;j++)
{cout<<"\n month"<<j+1<<":";
cin>>sales[i][j];
total=total+sales[i][j];
}

cout<<"total sales of salesman"<<i+1<<total <<endl;
}
return 0;
}
