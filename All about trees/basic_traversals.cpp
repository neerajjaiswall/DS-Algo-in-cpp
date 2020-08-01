#include<bits/stdc++.h>

using namespace std;

struct node {
	int data;
	node *left, *right;
};

node* create_binTree()
{
	node *newnode = new node();
	int x;
	cout << "value : ";
	cin >> x;
	if(x==-1) return NULL;

	newnode->data = x;
	cout << "enter " << x << "->left_";
	newnode->left = create_binTree();
	cout << "enter " << x << "->right_";
	newnode->right = create_binTree();

	return newnode;

}


void preorder(node *root)
{
	if(root == NULL ) return;
	cout << root->data<< " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node *root)
{
	if(root == NULL ) return;
	
	inorder(root->left);
	cout << root->data<< " ";
	inorder(root->right);
}

void postorder(node *root)
{
	if(root == NULL ) return;
	
	postorder(root->left);
	postorder(root->right);
	cout << root->data<< " ";
}
int main()
{
	node *root;
	root = NULL;
	root = create_binTree();
	cout << "\npreorder : ";
	preorder(root);
	cout << "\npreorder : ";
	inorder(root);
	cout << "\npreorder : ";
	postorder(root);
	cout << endl;
}