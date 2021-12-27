#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];//set i-th element as key for every i-th iteration
        j = i - 1;//set j as i-1
 
        /*for every j from i-1 to 0, move every arr[j] element to arr[j+1] till key is < arr[j]*/
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;//decrement j
        }
        
        arr[j + 1] = key;//move key to (j+1)th position  
    }
}

int main()
{
    int n;//length of array
	cout<<"Number of elements in array: ";
	cin>>n;//array length input
	
	int arr[n];//declaration of array
	cout<<"Enter the elements one by one:\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];//array input
 	
 	/*printing given array*/
 	cout<<"Your array is [ ";
	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
	cout<<"]\n";
	
    insertionSort(arr, n);//function call
 	
 	//printing the sorted array calling function
    cout << "\nArray after sorting: \n";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
 
    return 0;
}

