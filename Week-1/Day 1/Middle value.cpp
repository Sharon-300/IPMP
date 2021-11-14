#include<iostream>
#include "Linked_List.h"
using namespace std;

class LL obj;//class object

void mid1()
{
	int n=obj.length();//size of linked list
	cout<<"\nMiddle value is "<<obj.Element(n/2+1)<<endl;//Element present at [(n/2)+1]th node
}

void mid2()
{
	/*Two pointers temp and doble are used to traverse the list in steps of 1 and 2 respectively,
	 when duble becomes null or points to null, temp will be pointing the middle value*/
	  
	struct node *temp=head;//declaring a structure pointer as head
	struct node * doble=head;
	
	while(doble!=NULL&&doble->next!=NULL)
	{
		doble=doble->next->next;//advance 2 steps
		temp=temp->next;//advance 1 step
	}
	cout<<"\nMiddle value is "<<temp->data<<endl;//print temp->data
}

int main()
{
	class LL obj1;
	//Creating a linked list 1->2->3->4->5->6->NULL
	obj.Insert(1);
	obj.Insert(2);
	obj.Insert(3);
	obj.Insert(4);
	obj.Insert(5);
	obj.Insert(6);
	obj.Display(head);
	
	mid1();//Function call
	mid2();
}
