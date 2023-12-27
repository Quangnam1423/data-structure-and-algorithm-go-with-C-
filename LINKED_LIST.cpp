#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node *next;	
};

struct Node* head = NULL;
void insert(int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}

void display()
{
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL)
	{
		std::cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

void insert_position(int pos , int value)
{
	node *pre=new node;
	node*cur=new node;
	node *temp=new node;
	cur=head;
	for(int i = 1 ; i < pos ; i++ )
	{
		pre=cur;
		cur=cur->next;
	}
	temp->data=value;
	pre->next=temp;
	temp->next=cur;
}

void delete_position(int pos)
{
	node *current=new node;
	node *previous=new node;
	current=head;
	for(int i = 1 ; i < pos ; i++ )
	{
		previous=current;
		current=current->next;
	}
	previous->next=current->next;
 } 

int main()
{
	insert(3);
	insert(3);
	insert(2);
	insert(2);
}
