#include<iostream>
using namespace std;
main()
{     int *rsum,*csum,*val;
    int maxr,maxc,i,j;
    cout <<"enter the dimension  of the matrix:";
    cin>>maxr>>maxc;
    val=new int[maxr*maxc];
    rsum=new int [maxr];
    csum = new int[maxc];
    for(i=0;i<maxr;i++)
    {
        cout<<"enter the elements of row"<<i+1<<":";
        rsum[i]=0;
        for(j=0;j<maxc;j++)
        {
            cin>>val[i*maxc+j];
            rsum[i]+=val[i*maxc+j];
        }

    }
    for(j=0;j<maxc;j++)
    {
        csum[j]=0;
        for(i=0;i<maxr;i++)
        {
            csum+=val[j*maxr+i];

        }
    }
        cout<<"\n\n the given array along with rowsum and column sum is:\n\n";
        for(i=0;i<maxr;i++)
        {
            for(j=0;j<maxc;j++)
                {
                  cout<<val[i*maxc+j]<<"\t";
                }
                cout<<rsum[i]<<endl;
        }
        for(j=0;j<maxc;j++)
        {
            cout<<csum[j]<<"\t";

        }
        delete[]val;
        delete[]rsum;
        delete[]csum;

        return 0;
}
