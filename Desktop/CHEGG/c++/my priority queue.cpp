#include<iostream>
using namespace std;
#include "my_priority_queue.h"
int main(){
priority pq1;
pq1.insert(25);
pq1.insert(20);
pq1.insert(5);
pq1.insert(2);
pq1.insert(55);
pq1.insert(15);
cout<<"top element:"<<pq1.top()<<endl;
pq1.removeMin();
cout<<"top element:"<<pq1.top()<<endl;
pq1.print();


}

