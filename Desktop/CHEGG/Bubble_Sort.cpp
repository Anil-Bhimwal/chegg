#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
// Global variables
const int MAX_NUMBER_ITEMS= 8;
int myData[MAX_NUMBER_ITEMS];
void initializeMyData(){
    for(int i=0;i<MAX_NUMBER_ITEMS;i++){
        myData[i]= rand()%100; //will select a random number from 0 to 99

    }
}
void printMyData(){
    int i=0;
    cout<<"............................."<<endl;
    for(int i=0;i<MAX_NUMBER_ITEMS;i++){
        cout<<myData[i];
        if(MAX_NUMBER_ITEMS-1==i){
            cout<<endl;
        }else{
            cout<<"\t";
        }
    }
    cout<<"............................."<<endl;
}
bool isinOrder(int A, int B){
    return A<=B;//this will be the reason for printing in non-decreasing order
    //change it to A>=B for increasing orger;
}

void swap(int *ptrA,int *ptrB){
    int temp;
    const bool VERBOSE= false;
    if(VERBOSE){
        cout<<"ptrA point to"<<ptrA<<" which contains "<< *ptrA;

    }
    if(VERBOSE){
        cout<<"ptrA point to"<<ptrB<<" which contains "<< *ptrB;
    }

    temp = *ptrA;
    *ptrA= *ptrB;
    *ptrB= temp;
    if(VERBOSE){
        cout<<"ptrB point to"<<ptrA<<" which contains "<< *ptrA;

    }
    if(VERBOSE){
        cout<<"ptrB point to"<<ptrB<<" which contains "<< *ptrB;
    }
}

void bubbleSort(){
    int i, j;
    const bool VERBOSE= true;
    for(i=0;i<MAX_NUMBER_ITEMS;i++){
        for(j=i+1;j<MAX_NUMBER_ITEMS;j++){
            if(isinOrder(myData[i], myData[j])){
                swap(&myData[i], &myData[j]);
                if(VERBOSE){
                    printMyData();
                }
            }
        }
    }
}

int main(int argc, char** argv){
    initializeMyData();
    printMyData();
    bubbleSort();
    printMyData();
    return 0;

}
