#include<iostream>
using namespace std;
int *rollno;
float *marks;
main()
{
int size;
cout<<"how many elements are there in an array?:";
cin>>size;
rollno=new int[size];
marks=new float[size];
//check wheather memory is available or not
if(!rollno||!marks)
{cout<<"out of memory"<<endl;
return 1;
}
for(int i=0;i<size;i++)
{
cout<<"enter rollno and marks for students"<<(i+1)<<"\n";
cin>>rollno[i]>>marks[i];
}
cout<<"\t roll no \tmarks\n";
for(int i=0;i<size;i++)
cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
delete []rollno;
delete []marks;
return 0;

}
