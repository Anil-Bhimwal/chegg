#include<iostream>
void search(int,int[]);
using namespace std;
int main()
{
    int arr[20];
    int i,n;
    cout<<"how many number would you want to enter:";
    cin>>n;
    cout<<"enter numbers:";
    for(i=0;i<n;i++)

    {

        cin>>arr[i];
    }

    search(n,arr );
    return 0;}
    void search(int n,int arr[])
    {int i,j=n-1 ,temp;
    for(i=0;i<j;i++)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }for (i=0;i<n;i++)
    {
    cout<<"reversed array is"<<arr[i];
        }

}
