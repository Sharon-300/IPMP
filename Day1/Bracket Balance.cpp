#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool chkbal(char a[])//returns true if balanced else false
{
	stack<char> stk;//declaring stack
	char c;
	
	for (int i=0;i<strlen(a);i++)//accessing each element
	{
		/*pushing all open braces*/
		if(a[i]=='{'||a[i]=='('||a[i]=='['||a[i]=='<')
		{
			stk.push(a[i]);
			continue;//move to next iteration and skip remaining lines
		}
		
		
		/*for each closed brace pop the first element from stack and 
			check if it is its corresponding open brace*/
			  
		if(stk.empty())	return 0;//if stack is empty return false
		
		switch(a[i])
		{	  	
			case '}':
				c=stk.top();
				stk.pop();
				
				if (c!='{')//if it is not corresponding close brace return false
					return 0;
				break;
				
			case ')':
				c=stk.top();
				stk.pop();
				
				if (c!='(')
					return 0;
				break;
				
			case ']':
				c=stk.top();
				stk.pop();
				
				if (c!='[')
					return 0;
				break;
				
			case '>':
				c=stk.top();
				stk.pop();
				
				if (c!='<')
					return 0;
				break;	
		}
	}
	return 1;//if everything is fine
}

int main()
{
	char str[100];//declaring str
	gets(str);//getting input
	
	//function call and checking
	if(chkbal(str))
		cout<<"Balanced"<<endl;
	else
		cout<<"Not Balanced"<<endl;
}
