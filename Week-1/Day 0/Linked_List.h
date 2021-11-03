#include<iostream>
#include<cstdlib>
using namespace std;

struct node//structure with name node
{
	int data;//integer
	struct node* next;//pointer to the structure
}*head=NULL;//structure variable

class LL//class with name LL
{
	public://functions of class LL
		void Insert(int a);
		void Insert_pos(int a,int n);
		int length();
		void Del_node(int n);
		int search(int key);
		void Del_key(int key);
		void Display();
		int Element(int n);
		void Del_list();
		struct node * ret_head();
};

/*function definitions*/

void LL::Insert(int a)//To insert an element a at the end of the list
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));//alloting memory for structure pointer
	newNode->data=a;//the data field of the pointer becomes a
	newNode->next=NULL;//set pointer as NULL
	
	if(head==NULL)	head=newNode;//if list is empty, make this newNode as head
	
	else
	{
		struct node* temp=head;//declare a temp pointer as head for traversing list
		
		//traverse till the next field of node points NULL(till temp becomes last node)
		while(temp->next!=NULL)
		{
			temp=temp->next;//Advances to the position of next node
		}
		
		temp->next=newNode;//change the next pointer value from NULL to point newNode(linking)
	}
}

void LL::Insert_pos(int a,int n)//To insert element a at position n
{
	//Creating newNode
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=a;
	newNode->next=NULL;
	
	if (n==1)//if the position is first(head) 
	{
		newNode->next=head;//make the next field of newNode to point the previous head node(linking)
		head=newNode;//then make this newNode as the head
		return;
	}	
		
	if(n>1 && n<=(length()+1))//check for position value with the list length
	{
		struct node* temp=head;
		
		for(int i=1;i<n-1;i++)//Traverse to (n-1)th node
		{
			temp=temp->next;
		}
		//We are inserting between (n-1)th node and nth node
		newNode->next=temp->next;//The address which the temp->next [(n-1)th node] points should now be pointed by the newNode->next field
		temp->next=newNode;//The (n-1)th node should point to the newNode	
	}
	else
		cout<<"Unable to insert(such position does not exist!)"<<endl;	
}

int LL::length()//To return the length of the linked list
{
	struct node* temp=head;
	int count=0;//initialisation
	
	while(temp!=NULL)//Traverse till temp becomes NULL
	{
		count++;//add one at each iteration
		temp=temp->next;
	}
	return count;//return value
}

void LL::Del_node(int n)//To delete the node at the nth position
{
	//if first node(head) has to be deleted, simply make the head point towards the next node 
	if(n==1)	head=head->next;
	
	//else check for n value with the length
	else if(n<=length()&&n>1)
	{
		struct node* temp=head;
		for(int i=1;i<n-1;i++)//Traverse till (n-1)th node
		{
			temp=temp->next;
		}
		
		temp->next=temp->next->next;//Make this address point to the address pointed by the next node
	}
	else
		cout<<"No such node exists."<<endl;
}

int LL::search(int key)//Returns the position of node if key is found
{
	struct node* temp=head;
	int pos=0;
	while(temp!=NULL)//Traverse the whole list
	{
		pos++;//increment position value at each iteration
		if(temp->data==key)//if the data in the node matches the key return the position of node
		{
			return pos;
		}
		temp=temp->next;//Advances to the position of next node
	}
	
	return -1;//if not found return -1
}

void LL::Del_key(int key)//To delete the node with given key as data value
{
	int n=search(key);//get the position of the node with key value
	
	//if it is -1 then node is not found, else pass the position of node to Del_node() function
	if(n!=-1)
		Del_node(n);
	else
		cout<<"Not Found"<<endl;
}

void LL::Display()//To print the elements in the list
{
	if(head== NULL)	cout<<"List is empty."<<endl;// If the list is empty i.e. head = NULL 
	
	else
	{
		struct node *temp=head;
		int i=1;
		while(temp != NULL)
		{
			cout<<"Data at node "<<i<<" is "<<temp->data<<endl; //Prints the data of current node
			temp = temp->next; //Advances to the position of next node
			i++;
		}
	}
}

int LL::Element(int n)
{
	struct node* temp=head;
		
	for(int i=1;i<n;i++)//Traverse to nth node
	{
		temp=temp->next;
	}
	return temp->data;	
}

void LL::Del_list()//To delete entire list
{
	head=NULL;//Simply change the head as NULL
}

struct node * LL::ret_head()//function that returns the pointer head;
{
	return head;
}
