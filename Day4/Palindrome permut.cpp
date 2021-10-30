#include<iostream>
#include<string>
#include<map>
using namespace std;
//Complexity O(n)

int main()
{
	string str;
	getline(cin, str);//input string
	
	int len=str.length();//string length
	int n=len;
	
	map<char,int> freq;//declaring map
	map<char,int>::iterator it;
	
	for(int i=0;i<len;i++)
	{
		if (str[i]!=' ')//neglecting blank space
			freq[str[i]]++;
			
		else n--;//if blank space is present reduce 1 length
	} 
	
	/*n is the length of string neglecting blank space*/
	
	int odd_count=0;
	for(it=freq.begin();it!=freq.end();it++)//iterate the map
	{
		if(it->second%2==1)	odd_count++;//if any character is repeated odd times odd_count++
	}
	
	/*if n is odd then odd_count must be equal to 1
	  if n is even then odd_count must be equal to 0 for palindrome*/
	  
	if(n%2==odd_count)	cout<<"Yes"<<endl;
	else	cout<<"No"<<endl;
}
