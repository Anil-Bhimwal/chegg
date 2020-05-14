#include<iostream>
using namespace std;
struct emp
{
    char name[20];
    int age;
    float sal;
};
emp e1={"amit",21,2345.00};
emp e2={"ajay",23,4500.00};
emp &fun();
int main()
{
    fun()=e2;
    cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.sal;
return 0;
}
emp &fun()
{
  emp e3={"aditya",21,3300.00};
  return e3;
}
