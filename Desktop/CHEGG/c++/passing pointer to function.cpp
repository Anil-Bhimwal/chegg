#include<iostream>
using namespace std;
void display(int *ptr);//use * before ptr for call of reference
main()
{
int age=23;
display(&age);//use & before age for cof

cout<<age<<endl;
return 0;
}




void display(int *age)//use * before for age word in this definition

{
cout<<*age<<endl;
*age=100;
}
