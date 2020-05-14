#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cout << "Please enter input string: ";
    getline(cin, input);
    int letters=0, digits=0;
    for(int i=0;i<input.size();i++){
        if(isalpha(input[i])){//checking for alphabet
            letters++;
        }else if(isdigit(input[i])){//checking for digits
            digits++;
        }
    }
    cout<<"Letters: "<<letters<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Difference: "<<letters<<" - "<<digits<< " = "<<letters-digits<<endl;

}
