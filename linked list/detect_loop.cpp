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

bool detect_loop(node *head)
{
	node* fast, *slow;
	fast = slow = head;
	while(fast and fast->next)
	{
		fast= fast->next->next;
		slow = slow->next;
		if(fast == slow )
			return true;
	}
	return false;
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
	node *temp = head->next;
	head = insert(head, 3);
	head = insert(head, 4);
	head = insert(head, 5);
	head = insert(head, 6);
	head = insert(head, 7);
	head = insert(head, 8);

	node *ptr = head;
	while(ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next= temp;
	cout << detect_loop(head);


}