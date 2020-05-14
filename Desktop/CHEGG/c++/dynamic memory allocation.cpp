#include<iostream>
using namespace std;
main()
{
    int input,temp;
    int *pointer=NULL;
    cout<<"how many values you want to enter:";
    cin>>input;
    pointer = new int(input);
    for(int counter=0;counter <input;counter++)
    {
        cout<<"enter the item "<<counter+1<<":";
        cin>>temp;
        *(counter+pointer)=temp;

    }
     for(int counter=0;counter <input;counter++)
    {
        cout<<counter+1<<" entered  item :"<<*(counter+pointer)<<endl;


    }
    delete []pointer;
    return 0;

}
