#include<iostream>
using namespace std;
const int MAXROW=3;
const int MAXCOL=3;
/*getTotal: This method should accept a two-dimensional array as
its argument and return the total of all the values in the array.*/
int getTotal(int arr[MAXROW][MAXCOL]){
    int sum=0;

    for(int i=0;i<MAXROW;i++){
        for(int j=0;j<MAXCOL;j++){
            sum= sum+arr[i][j];
        }
    }
    return sum;
}
/*getAverage. This method should accept a two-dimensional array as its argument
and return the average of all the values in the array.*/
int getAverage(int arr[MAXROW][MAXCOL]){
    int sum=0;
    for(int i=0;i<MAXROW;i++){
        for(int j=0;j<MAXCOL;j++){
            sum= sum+arr[i][j];
        }
    }
    int numberofelements=MAXROW*MAXCOL;
    return sum/(numberofelements);
}
/*getRowTotal. This method should accept a two-dimensional array as its first argument and an integer as its second argument.
The second argument should be the subscript of a row in the array.
The method should return the total of the values in the specified row.*/
int getRowTotal(int arr[MAXROW][MAXCOL], int row){
    int rowSum=0;
    if(row>MAXROW){
        return  INT_MAX;
    }
    for(int j=0;j<MAXCOL;j++){
        rowSum= rowSum+arr[row][j];
    }
    return rowSum;
}

/*getColumnTotal. This method should accept a two-dimensional array as its first argument and an integer as its second argument.
The second argument should be the subscript of a column in the array.
The method should return the total of the values in the specified column.

*/

int getColumnTotal(int arr[MAXROW][MAXCOL], int col){
    int colSum=0;
    if(col>MAXCOL){
        return  INT_MAX;//for out of bound column number
    }
    for(int i=0;i<MAXROW;i++){
        colSum= colSum+arr[i][col];
    }
    return colSum;
}

/*getHighestInRow. This method should accept a two-dimensional array as its first argument and an integer as its second argument.
 The second argument should be the subscript of a row in the array.
 The method should return the highest value in the specified row of the array.*/
 int getHighestInRow(int arr[MAXROW][MAXCOL], int row){
    int highest= INT_MIN;
    if(row>MAXROW){
        return  INT_MIN;
    }
    for(int j=0;j<MAXCOL;j++){
        //if current number is larger than highest than update highest
        if(arr[row][j]>highest){
            highest= arr[row][j];
        }
    }
    return highest;
}

/*getLowestInRow. This method should accept a two-dimensional array as its first argument and an integer as its second argument.
The second argument should be the subscript of a row in the array.
The method should return the lowest value in the specified row of the array.*/
int getLowestInRow(int arr[MAXROW][MAXCOL], int row){
    int lowest= INT_MAX;
    if(row>MAXROW){
        return  INT_MAX;
    }
    for(int j=0;j<MAXCOL;j++){
        //if current number is smaller than lowest than update lowest
        if(arr[row][j]<lowest){
            lowest= arr[row][j];
        }
    }
    return lowest;
}

int main(){
    int arr[MAXROW][MAXCOL];
    /*INITIALIZE ARRAY*/
    cout<<"Enter elements of the array :"<<endl;
    for(int i=0;i<MAXROW;i++){
        for(int j=0;j<MAXCOL;j++){
            cin>>arr[i][j];
        }
    }
    /*print 2D array*/

    for(int i=0;i<MAXROW;i++){
        for(int j=0;j<MAXCOL;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    int total= getTotal(arr);
    cout<<"Total of whole elements: "<<total<<endl;
    int avg= getAverage(arr);
    cout<<"Average of all elements : "<<avg<<endl;
    int rowtotal= getRowTotal(arr, 2);//for 3rd row we pass 2
    cout<<"total of 3rd row is: "<<rowtotal<<endl;
    int coltotal= getColumnTotal(arr,1);//second column is passed
    cout<<"total of 2nd column is: "<<coltotal<<endl;
    int highestInRow=getHighestInRow(arr,1);
    cout<<"highest value in the 2nd row of the array "<< highestInRow<<endl;
    int lowestInRow= getLowestInRow(arr, 1);
    cout<<"lowest value in the 2nd row of the array "<< lowestInRow<<endl;
    return 0;
}
