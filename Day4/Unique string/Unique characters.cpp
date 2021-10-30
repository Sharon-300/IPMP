//To check if string has only unique characters
#include<iostream>
#include<string>
#include<map>
using namespace std;
//Complexity O(n)

int main()
{
	string str;
	getline(cin, str);//input string
	
	int flag=0,i=0;
	
	map<char,int> freq;//declaring map
	
	while(str[i])//iterating each char of string
	{
		freq[str[i]]++;//add each char with second value 1 or update the the value with ++ if str[i] already exists in map
		
		if(freq[str[i]]>1)//if after updating the count>1, then not unique
		{
			cout<<"No"<<endl;
			flag=1;
			break;
		}
		i++;
	} 
	
	if(flag==0)	cout<<"Yes"<<endl;
}
