#include<limits.h>
void findLargest(int a[][1000], int r, int c){

  int lcs=INT_MIN;int lrs=INT_MIN;int flag=0,f=0;
  for(int j=0;j<r;j++)
{int cs[c];cs[j]=0;
    for(int i=0;i<c;i++)
    {
        cs[j]+=a[i][j];

    if(lcs<cs[j])
      { lcs=cs[j];
       flag=j;
      }

    }
}
  for(int i=0;i<r;i++)
{int rs[r];rs[i]=0;
    for(int j=0;j<c;j++)
    {
        rs[i]+=a[i][j];

    }

    if(lrs<rs[i])
    {
     lrs=rs[i];
      f=i;
    }
 }

if(lcs>lrs)
    cout<<"colum"<<" "<<flag<<" "<<lcs;
if(lrs>=lcs)
    cout<<" row"<<" "<<f<<" "<<lrs;
}
