#include<iostream>
#include<set>
using namespace std;
//Complexity O(n)
int main()
{
	string str;//declring str variable
	getline(cin,str);//getting input
	
	set<char> char_set;//Creating a set
	int i=0;
	
	while(str[i])
	{
		char_set.insert(str[i]);//insert each char into set, but sets ignore duplicates
		i++;
	}
	
	//after inseting in set, if its size == str length, then no duplicates	
	if(char_set.size()==str.length())	cout<<"Yes";
	else	cout<<"No";
}
