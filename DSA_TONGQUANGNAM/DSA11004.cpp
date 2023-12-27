#include<iostream>

class node{
	public:
		int data;
		node* left;
		node* right;
		node(int val)
		{
			this->data = val;
			this->left = NULL;
			this->right = NULL;
		}
};

class bin_tree{
	public:
		node* root;
		bin_tree()
		{
			this->root = NULL;
		}
};

void creatnode(node* root , int parent , int child , char type)
{
	if(root == NULL) return;
	if(root->data == parent)
	{
		if(type == 'R')
		{
			root->right = new node(child);	
			return;
		}	
		if(type == 'L')
		{
			root->left = new node(child);
			return;
		}
	}	
	else
	{
		creatnode(root->left , parent , child , type);
		creatnode(root->right , parent , child , type);
	}
}

void printCurrentNode(node* root , int level)
{
	if(root == NULL) return;
	if(level == 1) 
	{
		std::cout << root->data << " ";
		return;
	}
	else
	{
		printCurrentNode(root->left , level - 1);
		printCurrentNode(root->right , level - 1);
	}
}

int height(node* Node)
{
	if(Node == NULL)
		return 0;
	int lheight = height(Node->left);
	int rheight = height(Node->right);
	if(lheight > rheight) 
		return lheight + 1;
	else 
		return rheight + 1;
}

void printorder(node* root)
{
	int h = height(root);
	for(int i = 1 ; i <= h ; i++ )
	{
		printCurrentNode(root , i);
	}
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		bin_tree tree;
		int n; std::cin >> n;
		int parent , child;
		char type;
		std::cin >> parent >> child >> type;
		tree.root = new node(parent);
		creatnode(tree.root , parent , child , type);
		for(int i = 0 ; i < n - 1 ; i++ )
		{
			std::cin >> parent >> child >> type;
			creatnode(tree.root , parent , child , type);
		}
		printorder(tree.root);
		std::cout << std::endl;
	}
	return 0;
}
