#include <iostream>
using namespace std;


// Driver Function
int main()
{
    string myArray;
    //for considering space as a character i'm using getline method
    getline(cin, myArray);
    cout<<"Input String : "<<myArray<<endl;
    int SLength= myArray.size();
    for(int i=0;i<SLength;i++){
        if(myArray[i]=='c'){
            //Replacing the 'c' with 'C'
            myArray[i]= 'C';
        }
    }
    cout<<"Changed string : "<< myArray;
    return 0;
}
