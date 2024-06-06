#include<iostream>
#include<algorithm>

class Node
{
	public:
		int data;
		Node* left;
		Node* right;
	public:
		Node(int val)
		{
			this->data = val;
			left = NULL;
			right = NULL;	
		}	
};

Node* create_new_node(int val);

// create a new node
Node* new_node(int val)
{
	Node* new_node = new Node(val);
	return new_node;
}

class Binary_Tree
{
	public:
		Node* root;
	public:
		Binary_Tree()
		{
			root = NULL;	
		}
		void Level_Order(Node* root);
			
};

// implementation--------------------------

void Binary_Tree::Level_Order(Node* root)
{
	int h = height(root);
	for(int i = 1 ; i <= h ; i++ )
	{
		printCurrentlevel(root , i);
	}
}

int height(Node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);
		if(lheight > rheight)
		{
			return lheight + 1;
		}
		else return rheight + 1;
	}
}

void printCurrentlevel(Node* root , int level)
{
	if(root == NULL)
		return;
	if(level == 1)
	{
		std::cout << root->data << " ";
	}
	else if(level > 1)
	{
		printCurrentlevel(root->left , level - 1);
		printCurrentlevel(root->right , level - 1);
	}
}

Node* create_new_node(int val)
{
	Node* newnode = new Node(val);
	return newnode;
}

int main()
{
	return 0;
}
