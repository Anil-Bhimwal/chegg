// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		int temp= arr[min_idx];
		arr[min_idx]= arr[i];
		arr[i]= temp;
	}
}

/* Function to print an array */
void printArray(int *arr, int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int n;
	cout<<"Enter number of elements that you wanna sort"<<endl;
	cin>>n;
	cout<<"Enter numbers"<<endl;
	int *arr= new int[n];
	//Storing the numbers into an array
	for(int i=0;i< n;i++){
        cin>> arr[i];
	}
	cout<<"Entered numbers are: "<<endl;

	printArray(arr, n);
	//calling selection sort function
	selectionSort(arr, n);

	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This is code is contributed by rathbhupendra

