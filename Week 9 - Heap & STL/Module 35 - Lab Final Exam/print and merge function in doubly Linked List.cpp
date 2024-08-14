#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
	int data;
	Node *nxt;
	Node *prev;

	Node(int val)
	{
		data = val;
		nxt = NULL;
		prev = NULL;
	}
};

class LinkedList
{
public:
	Node *head;
	Node *tail;

	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void insertHead(int val)
	{
		Node *newNode = new Node(val);
		if (head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			newNode->nxt = head;
			head->prev = newNode; // Corrected line
			head = newNode;
		}
	}

	void insertTail(int val)
	{
		Node *newNode = new Node(val);
		if (tail == NULL)
			head = tail = newNode;
		else
		{
			tail->nxt = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	void insertMid(int val)
	{
		if (head == NULL)
		{
			insertHead(val);
			return;
		}
		Node *slow = head;
		Node *fast = head;

		while (fast != NULL && fast->nxt != NULL)
		{
			fast = fast->nxt->nxt;
			if (fast != NULL)
				slow = slow->nxt;
		}
		Node *newNode = new Node(val);
		newNode->prev = slow;
		newNode->nxt = slow->nxt;

		if (slow->nxt != NULL)
			slow->nxt->prev = newNode;
		else
			tail = newNode;
		slow->nxt = newNode;
	}

	void print()
	{
		Node *current = head;
		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->nxt;
		}
		cout << "\n";
	}

	void Merge(LinkedList &a)
	{
		if (a.head == NULL)
			return;

		if (tail == NULL)
		{
			head = a.head;
			tail = a.tail;
		}
		else
		{
			tail->nxt = a.head;
			a.head->prev = tail;
			tail = a.tail;
		}
	}
};

int main()
{

	LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	cout << "Print A: \n";
	a.print(); // prints  0 1 3 5 10

	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	cout << "Print B: \n";
	b.print(); // prints  9 10 30 50 100

	a.Merge(b);
	cout << "Print After Merge: \n";
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
	cout << "Print B: \n";

	b.print(); // prints  9 10 30 50 100

	return 0;
}
