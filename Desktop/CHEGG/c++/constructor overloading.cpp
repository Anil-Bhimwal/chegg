#include<iostream>
#include<string>
using namespace std;
class human{
private :
    int age ;
    string name;
public :
    human()
    {
        cout<<"default constructor"<<endl;
        age=0;
        name="noname";
    }
    human(string iname)
    {
        cout<<" constructor with age as a parameter"<<endl;
        age=0;
        name=iname;
    }
    human(int iage)
    {
        cout<<" constructor with age as a parameter"<<endl;
        age=iage;
        name="noname";
    }
void display(){
cout<<endl<<age<<endl<<name<<endl;}

};
int main()
{
    human anil;
    anil.display();

    human aakash("aakash");
    aakash.display();

    human jai(23);
    jai.display();
    return 0;
}


