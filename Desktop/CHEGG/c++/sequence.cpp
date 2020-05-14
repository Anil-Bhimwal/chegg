#include<iostream>
using namespace std;
int main()
{
    int c,i=0,num=0;
    int n;
    cin>>n;
   bool counts=true;
    int a[n];
        for( i = 0; i<n; i++)            // loop for taking input
        {
           cin>>a[i];
        }


         while(i<n)
                // loop for finding the minimum point
        {

               name1: if(a[i+1]>a[i])

               {
                   i++;
                   if(a[i+2]<a[i+1])
                   {
                       if(counts==false)
                        counts==false;
                   }
                   else
                   {
                     counts==true;
                    goto name1;
                   }
               }
           counts==true;

           }



          name3:if(a[i+1]>a[i])

               {
                   i++;
                   if(a[i+2]<a[i+1])
                   {
                       i=i+2;
                       goto name2;
                   }
                   else
                    goto name3;

               }
            name2:   if(a[i]>a[i+1])
              {
                  i++;
                  counts=true;
              }
              else
                counts=false;



        if(counts == true)
        {
           cout<<"true";
        }
        else if(counts==false)
        {
           cout<<"false";
        }

       return 0;
}

