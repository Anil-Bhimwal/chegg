#include<iostream>
using namespace std;
void display(int[],int );


main()

{int numbers[]={20,23,25,26,26,28} ;
int length=6;
display(numbers,length);
return 0;
}
void display(int numbers[],int length){
for(int counter=0;counter<length;counter++){
cout<<numbers[counter]<<endl;
}}
