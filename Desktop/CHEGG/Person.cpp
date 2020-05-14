
#include<iostream>
using namespace std;
class Person{
private:
    string firstName;
    string lastName;
public:
    Person(){
        //default constructor
    }
    Person(string fName, string lName ){
        firstName = fName;
        lastName = lName;
    }
    //mutators
    void setFirstName(string fName){
        this->firstName=fName;
    }
    void setLastName(string lName){
        this->lastName=lName;
    }
    //Accessors
    string getFirstName(){
        return this->firstName;
    }
    string getLastName(){
        return this->lastName;
    }
    //dDisplay
    void display(){
        cout<<"First Name: "<<this->firstName<<" and Last Name is : "<<this->lastName<<endl;
    }
};
int main(){
    Person artist1;
    artist1.setFirstName("Mary");
    artist1.setLastName("Cassatt");
    Person artist2("Leonardo", "da Vinci");
    cout<<"About artist1 : "<<endl;
    artist1.display();
    cout<<"About artist2 : "<<endl;
    artist2.display();
    return 0;
}
