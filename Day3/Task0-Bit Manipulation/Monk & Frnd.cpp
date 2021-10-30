#include<iostream>
using namespace std;

int main()
{
    int T;cin>>T;//Input number of test cases
    int ans[T];//Declaring answer array;
    
    for(int i=0;i<T;i++)//T test cases
    {
        long long int a,b;cin>>a>>b;//Input two integers 0<a,b<10^16
        
        long long int n=a^b;//XOR-if bits are different it sets to 1

		/*count number of 1's in n*/
        int count=0;
        while( n )
        {
            n = n&(n-1);
            count++;
        }
        //store the count in ans[] for each test case
        ans[i]=count;
    }
	
	/*After getting all inputs and processing, print the ans in each line*/
    for(int i=0;i<T;i++)
        cout<<ans[i]<<endl;
}

