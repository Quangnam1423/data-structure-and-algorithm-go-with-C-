#include<iostream>
#include<bits/stdc++.h>

class Node
{
	public:
		int data;
		Node* next;
		Node(int val)
		{
			data = val;
			next = NULL;
		}
};

void push(Node* &head , int val)
{
	Node* new_node = new Node(val);
	new_node->next = head;
	head = new_node;
}

void push_back(Node* &head , int val)
{
	Node* new_node = new Node(val);
	if(head == NULL)
	{
		head = new_node;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
}

void show(Node* head)
{
	Node* temp = head;
	while (temp != NULL) 
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	
}

int main()
{
	Node* head = NULL;
	push(head , 1);
	push(head , 2);
	push_back(head , 2);
	show(head);
	return 0;
}
