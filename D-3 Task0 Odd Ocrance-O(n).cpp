#include<iostream>
#include<map>
//O(n) complexity
using namespace std;

int main()
{
	int n,i,flag=0;
	cin>>n;//number of elements of array
	int arr[n];//initialising array
	
	map<int,int> hash;//map
	map<int,int> ::iterator it;//iterator
	
	cout<<"\nEnter the elements one by one: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];//Input
		hash[arr[i]]++;//putting new elements into map and making second value as 1 or adding existing second value
	}
	
	for(it=hash.begin();it!=hash.end();it++)//iterating map
	{
		if((it->second)%2==1)//second value is frequency of first
		{
			cout<<"\n"<<it->first<<endl;//if freq is odd print first
			flag=1;
			break;
		}
	}
	if(flag==0)	cout<<"\nNo such Number occurs"<<endl;
}	
