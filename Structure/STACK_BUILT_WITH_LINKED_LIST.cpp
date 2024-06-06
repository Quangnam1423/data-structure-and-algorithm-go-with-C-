//stack built buy linked-list data structure
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
			data = val;
			next = NULL;
		}
};

class Stack
{
	public:
		Node* head;
		//constructor
		Stack()
		{
			//creat a stack with a node pointer equal NULL 
			head = NULL;
		}
	//impelmentation
	public:
		void Push(int val);
		int Top();
		bool Empty();
		void Pop();
		int Size();
		void Show();
};
// push a element to the stack
void Stack::Push(int val)
{
	Node* new_node = new Node(val);
	new_node->next = this->head;
	this->head = new_node;
}
//return the top element of stack
int Stack::Top()
{
	return this->head->data;
}
//check if stack is empty
bool Stack::Empty()
{
	if(this->head == NULL)
	{
		return true;
	}
	else return false;
}
//delete the top element of stack
void Stack::Pop()
{
	Node* temp = head;
	this->head = this->head->next;
	delete temp;
	temp = NULL;
}
//return the size of stack
int Stack::Size()
{
	Node* temp = this->head;
	int cnt(0);
	while(temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}
// show all elements of the stack
void Stack::Show()
{
	Node* temp = this->head;
	std::cout << "NULL -> ";
	while(temp != NULL)
	{
		std::cout << temp->data << "-> ";
		temp = temp->next;
	}
	std::cout << "NULL";
}
// main function to check
int main()
{
	Stack s;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Show();
	std::cout << std::endl;
    if (!s.Empty())s.Pop();
	s.Show();
	std::cout << std::endl;
	std::cout << s.Top() << std::endl;
	std::cout << s.Size() << std::endl;
	return 0;
}
