//Queue is similar queue library standard in c++ 
#include<iostream>

class Node
{
	public:
		int data;
		Node* next;
	public:
		//constructor
		Node(int val)
		{
			this->data = val;
			this->next = NULL;
		}
};

class Queue
{
	public:
		Node* head;
	public:
		//constructor
		Queue()
		{
			head = NULL;	
		}
		void push(int val);
		void pop();
		int front();
		int size();
		bool empty();
		void show();
};

bool Queue::empty()
{
	if(this->head == NULL) return true;
	return false;
}

int Queue::size()
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
// just use when queue not empty
int Queue::front()
{
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	return temp->data;
}

void Queue::push(int val)
{
	Node* new_node = new Node(val);
	new_node->next = head;
	head = new_node;
}
// just use when queue not empty
void Queue::pop()
{
	if(this->head == NULL) return;
	Node* temp = this->head;
	if(temp->next != NULL)
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
	else
	{
		delete temp;
		this->head = NULL;
	}
}

void Queue::show()
{
	Node* temp = this->head;
	while(temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "NULL";
}
// test to find out wrong
int main()
{
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	if(!q.empty()) std::cout << q.front() << std::endl;
	q.show();
	std::cout << std::endl;
	q.pop();
	q.pop();
	if(!q.empty()) std::cout << q.front() << std::endl;
	q.pop();
	if(!q.empty()) std::cout << q.front() << std::endl; 
	std::cout << q.size() << std::endl;
	return 0;
}
