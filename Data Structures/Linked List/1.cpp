//finding the length of the linked list
//deleting the entire linked list;
//reversing the linked list
//insertionn int starting ,end or in the middle
//finding the middle of the linked list
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct node* newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}
void push(struct node** headref,int new_data)
{
	struct node* new_node=newnode(new_data);
	new_node->next=(*headref);
	(*headref)=new_node;	
}
void inthemiddle(struct node** middle,int data)
{
	struct node* temp=*middle;
	if(temp->next==NULL)
		{
			struct node* new_node=newnode(data);
			temp->next=new_node;
		}
	else
		{
			struct node* new_node=newnode(data);
			new_node->next=temp->next;
			temp->next=new_node;
		}
}

struct node* printMiddleelement(struct node** head,int data)
{
	struct node* slow_ptr=*head;
	struct node* fast_ptr=*head;
	if(head!=NULL)
	{
		while(fast_ptr!=NULL&&fast_ptr->next!=NULL)
		{
			fast_ptr=fast_ptr->next->next;
			slow_ptr=slow_ptr->next;
		}
		cout<<"the middle element is "<<slow_ptr->data<<endl;
		inthemiddle(&slow_ptr,data);	
	}
}
void insertintheend(struct node** headref,int data)
{
	struct node* new_node=newnode(data);
	if(*headref==NULL)
	{
		*headref=new_node;
		return;
	}
	else
	{
		struct node* last=*headref;
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=new_node;
		return;
	}
}
void printlist(struct node** headref)
{
		if(*headref==NULL)
		{
				cout<<*headref<<endl;
				return ;
		}
		else
		{
			struct node* last=*headref;
			while(last->next!=NULL){
				cout<<last->data<<endl;
				last=last->next;
			}
			return;
		}
}
static void reversing(struct node** headref)
{
	struct node* prev=NULL;
	struct node* current=*headref;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*headref=prev;
}
int main(void)
{
	int t;
	int n;
	int data;
	struct node* headref=NULL;
	cout<<"enter the no of linked list ";	
	cin>>t;
	while(t--)
	{
		cout<<"enter the no of nodes you want your linked list with";
		cin>>n;
		cout<<"enter the head node";
		cin>>data;
		headref=newnode(data);
		cout<<headref->data<<"-->"<<headref->next<<endl;
		while(--n)
		{
			cout<<"enter the node";
			cin>>data;
			insertintheend(&headref,data);
			printlist(&headref);
		}
		cout<<"enter the data to be inserted in the middle";
		cin>>data;
		printMiddleelement(&headref,data);
		printlist(&headref);
		cout<<"enter the data to be inserted in the front of the linked list";
		cin>>data;
		push(&headref,data);
		printlist(&headref);
		reversing(&headref);
		printlist(&headref);
	}		
	return 0;
}