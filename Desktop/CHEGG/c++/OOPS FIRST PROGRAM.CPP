#include<iostream>
#include<string>
using namespace std;
class humanbeing {
public:
    string name;
    void introduce(){
    cout<<"hello i am "<<name<<endl;
    }
    };
int main()
{
    humanbeing anil;
    anil.name="anil";
    anil.introduce();
    humanbeing aakash;
    aakash.name="aakash";
    aakash.introduce();
    humanbeing *aman=new humanbeing();
    aman->name="vijay";
    aman->introduce();
    return 0;

}
