#include<bits/stdc++.h>
using namespace std;
class Appointment{
public:
    string notes;
    void add_appt(string name, string date, string time, string reason){
        notes= "Rocket has an appt with Dr. "+ name+ " on "+ date+ " at "+ time + "\nReason for appt : " + reason;
    }
    void clear_notes(){
        notes="";
    }
};
int main(){
    Appointment rocket;
    rocket.add_appt("Drew", "4/23/13", "11:00 am", "Rabies shot");
    cout<<rocket.notes<<endl;
    cout<<"Calling  clear method" <<endl;
    rocket.clear_notes();
    cout<<"After clearing value of notes : "<<rocket.notes<<endl;
}
