#include<iostream>
#include<string>
#define MAX 256
using namespace std;
//O(n) complexity

/*In ASCII 8 bit there are only 256 unique characters
so initialize an array of size 256 with all values as false
if a new character comes change its corresponding ascii value element as true
But if it is already true, then not unique*/

int main()
{
	string str;//declring str variable
	getline(cin,str);//getting input
	
	bool ascii[MAX]={0};//initialising as false
	int i=0,flag=0;
	
	if(str.length()>256)	cout<<"No"<<endl;//if more than 256 char are present in string, then false
	
	else
	{
		while(str[i])//loop takes each character-O(n)
		{
			if(ascii[int(str[i])]==1)//check if the value in bool array is already true for the ascii value of this character
			{
				cout<<"No"<<endl;//if it is already true, not unique
				flag=1;
				break;
			}
			ascii[int(str[i])]=1;//if it is not already true, then make it true
			i++;
		}
		if(flag==0)	cout<<"Yes"<<endl;
	}
}
