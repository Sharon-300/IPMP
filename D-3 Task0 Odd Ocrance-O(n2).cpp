#include<iostream>
#include<algorithm>
//O(n^2) complexity
using namespace std;

int main()
{
	int n,i,flag=0;
	cin>>n;//number of elements of array
	int arr[n];//initialising array
	
	cout<<"\nEnter the elements one by one: "<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];//Input
	
	for(i=0;i<n;i++)//O(n)
	{
		//stl function to return number of occurences of a value - O(n) complexity
		int num=count(arr,arr+n,arr[i]);//SYNTAX: count(start_addrs, end_addrs, val)
		
		if(num%2==1)//if count is odd
		{
			flag=1;
			cout<<"\n"<<arr[i]<<endl;
			break;
		}
	}
	if(flag==0)	cout<<"\nNo such Number occurs"<<endl;
}

