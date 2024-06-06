#include<iostream>

class Node
{
	public:
		int data;
		Node* prev;
		Node* next;
		Node(int val)
		{
			data = val;
			prev = NULL;
			next = NULL;
		}
};

void push_front(Node* &head , Node * &trailer , int val)
{
	Node* new_node = new Node(val);
	if(head == NULL)
	{
		trailer = new_node;
	}
	else head->prev = new_node;
	new_node->next = head;
	head = new_node;
}

void push_back(Node* &head , Node* &trailer , int val)
{
	Node* new_node = new Node(val);
	if(trailer == NULL)
	{
		head = new_node;
	}
	else trailer->next = new_node;
	new_node->prev = trailer;
	trailer = new_node;
}

void show_ordered(Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

void show_Xordered(Node* trailer)
{
	Node* temp = trailer;
	while(temp!= NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->prev;
	}
	std::cout << std::endl;
}

int main()
{
	Node* trailer = NULL;
	Node* head = NULL;
	push_front(head , trailer , 1);
	push_front(head , trailer , 2);
	push_back(head , trailer , 2);
	push_back(head , trailer , 1);
	show_ordered(head);
	show_Xordered(trailer);
	return 0;
}
