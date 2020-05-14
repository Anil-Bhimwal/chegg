#include<iostream>
#include<algorithm>
using namespace std;
void sortNumbers(int &a, int &b, int &c){
    //using inbuilt sort function, you can use any other sorting algorithm to sort the array
    //sort function do it in minimum cost so I'm using it.
    int arr[3];
    arr[0]=a;
    arr[1]= b;
    arr[2]= c;
    sort(arr, arr+3);
    a= arr[0];
    b=arr[1];
    c= arr[2];

}
void sortNumbers(double &a, double &b, double &c){
    //using inbuilt sort function
    double arr[3];
    arr[0]=a;
    arr[1]= b;
    arr[2]= c;
    sort(arr, arr+3);
    a= arr[0];
    b=arr[1];
    c= arr[2];

}
void sortNumbers(long &a, long &b, long &c){
    //using inbuilt sort function
    long arr[3];
    arr[0]=a;
    arr[1]= b;
    arr[2]= c;
    sort(arr, arr+3);
    a= arr[0];
    b=arr[1];
    c= arr[2];

}
int main(){
    int num1, num2, num3;
    cout<<"Enter 3 integer numbers : ";
    cin>>num1>>num2>>num3;
    double n1, n2, n3;
    cout<<"Enter 3 double numbers : ";
    cin>>n1>>n2>>n3;
    long l1, l2, l3;
    cout<<"Enter 3 long numbers : ";
    cin>>l1>>l2>>l3;
    sortNumbers(num1, num2, num3);
    cout<<"sorted integers:  "<<num1<<" "<<num2<<" "<<num3<<endl;
    sortNumbers(n1, n2, n3);
    cout<<"sorted double numbers : "<<n1<<" "<<n2<<" "<<n3<<endl;
    sortNumbers(l1, l2, l3);
    cout<<"sorted long numbers : "<<l1<<" "<<l2<<" "<<l3<<endl;

}
