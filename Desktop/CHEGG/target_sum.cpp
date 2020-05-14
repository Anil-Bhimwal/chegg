#include<bits/stdc++.h>
using namespace std;
class solution{
public:

    vector<int> vec;

    int num_of_calls=0;
     int count=1;
    solution(){//constructor

        for(int i=0;i<9;i++){
            vec.push_back(0);
        }
        while(count<=6){
                num_of_calls++;
            int index= rand()%9;
            if(vec[index]==0){
                vec[index]= count;
                count++;
            }
        }
    }

    void print(){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<", random calls: "<< num_of_calls<<endl;
    }
};

int main(){
    //vector of 10 rows and 9 columns
    vector<vector<int> > fin_sol;
    for(int i=0;i<10;i++){
        solution object;
        object.print();
        fin_sol.push_back(object.vec);
    }


}
