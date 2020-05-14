#include<bits/stdc++.h>
using namespace std;

void removeDigits(string &input){
    for(int i=0;i<input.length();){
        if(isdigit(input[i])){
            //shifting right side characters to the left by 1.
            //Eg. ab12sd will become ab2sd if we detect 1 as digit
            for(int j=i;j<input.length();j++){
                input[j]= input[j+1];
            }
        }else{
            i++;
        }
    }
}
int main(){
    string input;
    cin>>input;
    cout<<"Original string: "<<input<<endl;
    removeDigits(input);
    cout<<"string after removing digits from original string : "<< input<<endl;
}
