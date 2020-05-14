#include<iostream>
using namespace std;
main()
{
    int mat[4][4],i,j,temp;
    cout<<"enter the elements of the matrix:";
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            cin>>mat[i][j];

    }
    cout<<"the matrix you entered is:";
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            cout<<"\n"<<mat[i][j];

    }
    /*transpose of matrix*/
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;

    }cout<<"transposed matrix is:";
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            cout<<"\n"<<mat[j][i];
    }
    return 0;
}
