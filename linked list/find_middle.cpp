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

node * findMiddle(node *head)
{
	node *slow = new node();
	node *fast = new node();
	slow = head;
	fast = head;
	while(fast!=NULL and fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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
int main()
{
	node *head = NULL;
	head = insert(head, 1);
	head = insert(head, 2);
	head = insert(head, 3);
	head = insert(head, 4);
	head = insert(head, 5);
	head = insert(head, 6);
	head = insert(head, 7);
	// head = insert(head, 8);
	print(head);

	cout << "middle : "<<findMiddle(head)->data <<endl;
	
}