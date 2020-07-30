#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

node* insert (node *head, int a)
{
	node *ptr = new node();
	ptr->data = a; 
	ptr->next = NULL;

	if(head == NULL )
	{
		head = ptr;
	}
	else 
	{
		node *temp = head;
		while (temp->next != NULL )
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return head;
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout << head->data << " ";
		head = head ->next;
	}
	cout << "\n";
}

bool isPalindrome(node* &left, node* right)
{
	if(right==NULL)
		return true;
	if(isPalindrome(left, right->next)==false)
		return false;
	if(left->data != right ->data) return false;
	left = left->next;
	return true;
}
int main()
{
	node *head = NULL;
	head = insert(head, 1);
	head = insert(head, 2);
	head = insert(head, 3);
	head = insert(head, 1);
	// head = insert(head, 5);
	// head = insert(head, 6);
	// head = insert(head, 7);
	// head = insert(head, 8);
	print(head);

	if(isPalindrome(head, head)) cout << "yes the string is is Palindrome";
	else cout << "no the string is not Palindrome";
	cout << endl;


}