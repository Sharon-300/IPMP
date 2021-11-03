#include<iostream>
#include<stack>
#include "Linked_List.h"
using namespace std;

int main()
{
	stack<struct node *> stk;//Stack of data type struct node*
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
	struct node * newNode;
	
	while(temp!=NULL)//Traverse each node till temp becomes NULL
	{
		stk.push(temp);//Push the entire node into the stack
		temp=temp->next;//Advance to next node
	}
	
	head=stk.top();//Make the first node from stack(which was originally the last node in LL) as head
	stk.pop();//Now pop it from stack
	
	head->next=NULL;//Set its next field as NULL
	
	temp=head;//Initialize a struct pointer as this new head
	
	while(!stk.empty())
	{
		newNode=stk.top();//Pop each node and store it in a structure pointer
		stk.pop();
		
		temp->next=newNode;//make the next field of temp to point this newNode
		newNode->next=NULL;//Set its next field as NULL
		
		temp=temp->next;//Move the temp to the next node(which will be the newly added node)
	}
	
	cout<<"\nAfter Reversing...\n\n";
	obj.Display();//Display the linked list
}
	
	
