//Doubly Linked List build as class
#include<iostream>
#include<vector>

class Node
{
	public:
		int data;
		Node* next; 
		Node* prev;
	//implementation
	public:
	//constructor
		Node(int val)
		{
			data = val;
			prev = NULL;
			next = NULL;	
		}	
};

class Dequeue
{
	public:
		Node* head;
		Node* tail;
	public:
	//method
		Dequeue()
		{
			head = NULL;
			tail = NULL;
		}
		void Push_Back(int val);
		void Push_Front(int val);
		void Show_Ordered();
		void Show_AtTail();
		bool Empty();
		int Size();
};

//implementation built for Dequeue
void Dequeue::Push_Back(int val)
{
	Node* new_node = new Node(val);
	if(this->tail == NULL)
	{
		this->tail = new_node;
		this->head = new_node;
	}
	else
	{
		this->tail->next = new_node;
		new_node->prev = this->tail;
		this->tail = new_node;
	}
}

void Dequeue::Push_Front(int val)
{
	Node* new_node = new Node(val);
	if(head == NULL)
	{
		this->head = new_node;
		this->tail = new_node;
	}
	else
	{
		this->head->prev = new_node;
		new_node->next = this->head;
		this->head = new_node;
	}
}

void Dequeue::Show_Ordered()
{
	std::cout << "NULL ";
	Node* temp = head;
	while(temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "NULL";
}

void Dequeue::Show_AtTail()
{
	std::cout << "NULL ";
	Node* temp = tail;
	while(temp != NULL)
	{
		std::cout << temp ->data << " ";
		temp = temp->prev;
	}
	std::cout << "NULL";
}

bool Dequeue::Empty()
{
	if(head == NULL)
	{
		return true;
	}
	else return false;
}

int Dequeue::Size()
{
	int cnt(0);
	Node* temp = head;
	while(temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

int main()
{
	Dequeue q;
	q.Push_Back(1);
	q.Push_Back(2);
	q.Show_Ordered();
	std::cout << std::endl;
	q.Show_AtTail();
	std::cout << std::endl;
	q.Push_Front(3);
	q.Push_Front(4);
	q.Show_Ordered();
	std::cout << std::endl;
	std::cout << "Kiem tra so luong phan tu cua list la: " << q.Size() << std::endl;
	std::cout << "Kiem tra list: " << q.Empty() << std::endl;
	return 0;
}
