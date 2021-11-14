#include<iostream>
#include "Linked_List.h"
using namespace std;

int main()
{
	class LL obj;//object for class in header file
	
	/*creating a linked list*/
	obj.Insert(5);
	obj.Insert(1);
	obj.Insert(12);
	obj.Insert(51);
	obj.Insert(7);
	obj.Insert(3);
	
	obj.Display(head);
	
	int n;
	cout<<"\nEnter the value of n for the nth node from the end: ";
	cin>>n;
	
	int len=obj.length();//finding length of linked list
	
	if(n<1||n>len)	cout<<"\nInvalid input"<<endl;//checking conditions for n value
	
	else
	{
		int req=len-n+1;//nth node from end will be (len-n+1)th node from front
		cout<<"Element at position "<<n<<" from the end is "<<obj.Element(req);
	}
}
