#include<iostream>
using namespace std;
long int fact(int);
main()
{
int num;
long int factorial;
cout<<"enter any number:";
cin>>num;
factorial=fact(num);
cout<<"factorial of"<<num<<"="<<factorial;
return 0;
}
long int fact(int num)
{
int i;
long int factorial=1;
for(i=1;i<=num;i++)
factorial=factorial*i;
return(factorial);
}
