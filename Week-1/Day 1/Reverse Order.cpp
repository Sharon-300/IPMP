#include<iostream>
#include<stack>
#include "Linked_List.h"
using namespace std;

int main()
{
	stack<int> stk;//Stack of data type int
	class LL obj;
	
	//Creating a linked list
	obj.Insert(1);
	obj.Insert(2);
	obj.Insert(3);
	obj.Insert(4);
	obj.Insert(5);
	obj.Insert(6);
	
	obj.Display();//Display the linked list
	
	struct node * temp=head;//declaring a structure pointer as head
	
	while(temp!=NULL)//Traverse each node till temp becomes NULL
	{
		stk.push(temp->data);//Push the data of each node from the head into the stack
		temp=temp->next;//Advance to next node
	}
	
	int n=obj.length();
	cout<<"\nList of elements in reverse order is\n\n";
	
	for(int i=n;i>=1;i--)//pop the elements one by one from stack and print
	{
		int a=stk.top();
		stk.pop();
		cout<<"Data at Node "<<i<<" is "<<a<<endl;
	}
}
