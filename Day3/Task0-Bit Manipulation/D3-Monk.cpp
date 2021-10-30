#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T;cin>>T;//First line input Test cases
	int ans[T];//array for storing answers in each case
	
	for(int i=0;i<T;i++)//T test cases
	{
	    int N,K; cin>>N>>K;//First line input in each case
	    int setbit[N];//declaration of array-setbit[N] to store no.of 1's in each number
		 
	    for(int j=0;j<N;j++)//To get N numbers and process
	    {
	    	int n;
	        cin>>n;//input
	        
	        /*count number of 1's*/
	        int count=0;
    	    while( n )
    		{
        		n = n&(n-1);
        		count++;
        	}
        	//store count in setbit array for each number 
	        setbit[j]=count;
	    }
	    
	    //After getting all N inputs in one Test case 
	    
	    sort(setbit,setbit+N,greater<int>());//desc. sort
	    
	    ans[i]=0;
	    for(int j=0;j<K;j++)//after sorting add first K setbit values to get max value
	        ans[i]+=setbit[j];//store the sum in ans[i] for each test case
	}
	
	/*After getting all inputs and processing print the ans in each line*/
	for(int i=0;i<T;i++)
    	cout<<ans[i]<<endl;
}

