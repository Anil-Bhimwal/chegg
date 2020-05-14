#include<iostream>
using namespace std;
main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k,sum;
    cout<<"enter the elements of first matrix:\n\t";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cin>>mat1[i][j];
    }
    cout<<"enter the elements of second matrix:\n\t";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cin>>mat2[i][j];
    }
    cout<<"elements of first matrix are:\n\t";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cout<<mat1[i][j];
    }
    cout<<"elements of second matrix are:\n\t";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cout<<"\n\t"<<mat2[i][j];
    }
    /*multiplication of matrices*/
    for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++)

       {sum=0;
           for(k=0;k<=2;k++)
            sum=sum+mat1[i][k]*mat2[k][j];
 mat3[i][j]=sum;
       }
    }
    cout<<"multiplication of matries is:";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        cout<<"\n"<<mat3[i][j];
    }
    return 0;
}
