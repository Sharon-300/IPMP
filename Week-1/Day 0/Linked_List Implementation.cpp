#include<iostream>
#include "Linked_List.h"//including header file
using namespace std;

int main()
{
	class LL obj;//creating object for class in Linked_List header file
	cout<<"Initially LL is empty"<<endl;
	int ch,data,key,n;
	do
	{
		cout<<"\nSelect an operation to be performed on the linked list"<<endl;
		cout<<"1.Insert Node at the end of list\n2.Insert node at given position\n3.Delete the node with given key\n4.Delete node at given position\n5.Search the position of node for given key\n6.Length of the linked list\n7.Delete entire list\n8.Print the list\n9.To print the element at given node\n10.Exit"<<endl;
		cout<<"Enter (1/2/3/4/5/6/7/8/9/10): ";cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter the element to be inserted: ";
				cin>>data;
				obj.Insert(data);//accessing class member using object
				break;
			case 2:
				cout<<"\nEnter the element and its position to be inserted: ";
				cin>>data>>n;
				obj.Insert_pos(data,n);
				break;
			case 3:
				cout<<"\nEnter the element whose node has to be deleted: ";
				cin>>key;
				obj.Del_key(key);
				break;
			case 4:
				cout<<"\nEnter the position of the node to be deleted: ";
				cin>>n;
				obj.Del_node(n);
				break;
			case 5:
			{
				cout<<"\nEnter the element to be searched: ";
				cin>>key;
				int pos=obj.search(key);
				if(pos!=-1)
					cout<<"\nElement found at node "<<pos<<endl;
				else
					cout<<"\nElement not found."<<endl;
				break;
			}
			case 6:
				cout<<"\nLength of Linked List is "<<obj.length()<<endl;
				break;
			case 7:
				obj.Del_list();
				break;
			case 8:
				obj.Display();
				break;
			case 9:
			{
				cout<<"\nEnter the position of node: ";
				cin>>n;
				if(n>0 && n<=obj.length())
					cout<<"Element at node "<<n<<" is "<<obj.Element(n)<<endl;
				else
					cout<<"No such position exists"<<endl;
				break;
			}
			case 10:
				break;
			default:
				cout<<"Wrong input"<<endl;
		}
	}while(ch!=10);
}
