#include<iostream>
#include<string>
using namespace std;
//Complexity O(n^2)
int main()
{
	string str;//declring str variable
	getline(cin,str);//getting input
	
	int i=0,flag=0;//intialization
	
	while(str[i])//loop taking each character-O(n)
	{
		for(int j=0;j<str.length();j++)//loop to take each charater and compare with str[i]-O(n)
		{
			if(str[i]==str[j]&& i!=j)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)	
		{
			cout<<"No"<<endl;
			break;
		}
		i++;
	}
	if(flag==0)	cout<<"Yes"<<endl;
}
