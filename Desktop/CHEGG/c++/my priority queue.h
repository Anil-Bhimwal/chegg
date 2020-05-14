#include<vector>
template<typename T>
class priority{
 vector<T> pq;
 public:
priority()
{

}
void insert(T element)
{
 pq.push(element);
 int childIndex=pq.size()-1;
 int parantIndex=(childIndex-1)/2;
 while(childIndex>0)
 {
     parantIndex=(childIndex-1)/2;
   if(pq[childIndex]>pq[parantIndex])
   {
       int temp=pq[parantIndex];
       pq[parantIndex]=pq[childIndex];
       pq[childIndex]=pq[parantIndex];
   }
   else{
    return;
   }
   childIndex=parantIndex;
 }

}
void print()
{
    for(int i=0;i<pq.size();i++)
    {
        cout<<pq[i]<<" ";
    }
}

};
