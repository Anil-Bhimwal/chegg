#include<vector>
#include<climits>
#include<iostream>
using namespace std;
class priority{
 vector<int> pq;
 public:
priority()
{

}
void insert(int element)
{
 pq.push_back(element);
 int childIndex=pq.size()-1;
 int parantIndex=(childIndex-1)/2;
 while(childIndex>0)
 {

   if(pq[childIndex]<pq[parantIndex])
   {
       int temp=pq[parantIndex];
       pq[parantIndex]=pq[childIndex];
       pq[childIndex]=temp;
   }
   else{
    return;
   }
   childIndex=parantIndex;
    parantIndex=(childIndex-1)/2;
 }

}
int removeMin()
{
    if(pq.size()==0)
    {
        cout<<"empty queue"<<endl;
        return 0;
    }
    else{
            int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parantIndex=0;
        int child1=(2*parantIndex+1);
            int child2=(2*parantIndex+2);
            int mini=parantIndex;
        while(child1<pq.size())
        {


            if(child1<pq.size()&&child2<pq.size()){
             if(pq[child1]<pq[child2]){
                 mini=child1;
             }
             else
                mini=child2;

            }
            else if(child1<pq.size()&&child2>=pq.size())
            {
             mini=child1;
            }
            else if(child1>=pq.size()&&child2<pq.size())
            {
             mini=child2;
            }
            else{
                break;
            }
            if(pq[parantIndex]>pq[mini])
            {
                int temp1=pq[parantIndex];
                pq[parantIndex]=pq[mini];
                pq[mini]=temp1;
                parantIndex=mini;
                child1=(2*parantIndex+1);
                child2=(2*parantIndex+2);
            }
            else{
                break;
            }

        }
           return ans;
    }


}
int top(){
 if(pq.size()==0)
 {
     return 0;
 }
 return pq[0];
}
void print()
{
    for(int i=0;i<pq.size();i++)
    {
        cout<<pq[i]<<" ";
    }
}

};
