#include<iostream>

class Node{
	public:
		Node* next;
		int data;
	public:
		//constructor
		Node(int val)
		{
			this->data = val;
			this->next = NULL;
		}
};

class stack{
	public:
		Node* head;
	public:
		//constructor
		stack()
		{
			this->head = NULL;
		}
		void push(int val);
		int top();
		bool empty();
		void pop();
		int size();
		void show();
};

// implementation
void stack::push(int val)
{
	Node* new_node = new Node(val);
	new_node->next = this->head;
	this->head = new_node;
}
//push an element at the top of stack
int stack::top()
{
	return this->head->data;
}
//return the value of top element
bool stack::empty()
{
	if(this->head == NULL) return true;
	return false;
}
// check if the stack is empty
void stack::pop()
{
	Node* temp = this->head;
	this->head = this->head->next;
	delete temp;
	temp = NULL;
}
// delete the top element of the stack
int stack::size()
{
	int cnt(0);
	Node* temp = this->head;
	while(temp !=NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}
// return size of stack
void stack::show()
{
	Node* temp = this->head;
	std::cout << "NULL -> ";
	while(temp != NULL)
	{
		std::cout << temp->data << " -> ";
		temp = temp->next;
	}
	std::cout << "-> NULL";
}
int main()
{
	//
	//test the program
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.show();
	std::cout << std::endl;
    if (!s.empty()) s.pop();
	s.show();
	std::cout << std::endl;
	std::cout << s.top() << std::endl;
	std::cout << s.size() << std::endl;
	return 0;
}
