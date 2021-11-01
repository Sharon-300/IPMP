#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//Complexity O(nlogn)
int main()
{
	string str;//declring str variable
	getline(cin,str);//getting input
	
	int flag=0;
	
	/*sort the string according to ASCII value so that all like elements will be adjacent*/
	sort(str.begin(),str.end());//O(nlogn)
	
	for(int i=1;i<str.length();i++)//O(n)
	{
		if(str[i]==str[i-1])//if two adjacent elements are same, then not unique
		{
			cout<<"No"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)	cout<<"Yes"<<endl;
}
