#include<iostream>
#include<stack>
#include "Linked_List.h"
using namespace std;
//O(n) Complexity

int main()
{
	class LL obj;
	int data,flag=0;
	char ch;
	
	do
	{
		cout<<"Enter the element to be inserted: ";
		cin>>data;
		obj.Insert(data);
		cout<<"Press y to continue inserting! ";
		cin>>ch;
		cout<<"\n";
	}while(ch=='y');
	
	obj.Display();//Display the linked list
	int n=obj.length();
	
	stack<int> stk;//Stack of data type int
	
	struct node * temp=head;//declaring a structure pointer as head
	
	while(temp!=NULL)//Traverse each node till temp becomes NULL
	{
		stk.push(temp->data);//Push the data of each node from the head into the stack
		temp=temp->next;//Advance to next node
	}
	
	temp=head;//initialising a structure pointer as head
	
	for(int i=n;i>=1;i--)//pop the elements one by one from stack and compare it with the data in LL from the front
	{
		if (stk.top()==temp->data)
		{
			stk.pop();
			temp=temp->next;//advance to next node
		}
		
		else//if the data doesnt match, then not palindrome
		{
			cout<<"\nNot a Palindrome"<<endl;
			flag=1;
			break;
		}
	}
	
	if(flag==0)	cout<<"\nPalindrome! "<<endl;
	
}
