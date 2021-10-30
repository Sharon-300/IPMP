#include <iostream>
using namespace std;

int main()
{
	int n,k,i,j,sum;
	int f=0;
	cin>>n;//getting length of array
	
	int a[n];//declaring array of size n
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];//getting input for each element
	}
	
	cin>>k;//number to be checked for pairs
	
	/* fix one element and add it with other elements until pair is found.*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=a[i];
			if (j!=i)
			{
				sum+=a[j];
				if(sum==k)
				{
					cout<<"\nPair Exists: "<<a[i]<<" "<<a[j]<<endl;
					f=1;
					break;
				}
			}
		}
		if(f==1)	break;
	}
	if(f==0)	cout<<"\nNo Pairs"<<endl;
}
