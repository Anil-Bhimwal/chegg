#include<iostream>
#include<string>
using namespace std;
class human{
private :
    int age;
    int getage(){
    return age-2;
    };
public :
    void displayage(){
    cout<<"my age is  "<<getage()<<endl;
    }
    void setage(int value){
    age=value;
    }
    };
    main()
    {
        human anil;
        anil.setage(25);
        anil.displayage();
        return 0;

    }
