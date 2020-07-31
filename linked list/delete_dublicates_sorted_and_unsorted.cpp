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

void deleteDublicatesSorted(node *head)
{
	while(head->next)
	{
		if(head->next->data == head->data)
		{
			node *temp = head->next;
			head->next = head->next->next;
			delete temp;
		}
		else head = head->next;
	}
}

void deleteDublicatesUnsorted(node *head)
{
	set<int> s;
	node *pre = head;
	while(head)
	{
		if(s.count(head->data))
		{
			node *temp = head;
			head = head->next;
			pre->next= head;
			delete temp;
		}
		else {s.insert(head->data); pre = head; head = head->next;}
		 
	}
}

int main()
{
	node *head = NULL;
	head = insert(head, 1);
	head = insert(head, 1);
	// head = insert(head, 3);
	// head = insert(head, 4);
	// head = insert(head, 4);
	// head = insert(head, 6);
	// head = insert(head, 7);
	// head = insert(head, 7);
	print(head);
	// deleteDublicatesSorted(head);
	deleteDublicatesUnsorted(head);
	print(head);


}