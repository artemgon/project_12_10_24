#include "libs.h"

class StackList
{
private:
	struct Node
	{
		int data;
		Node* next;
	};
public:
	Node* head;
	StackList()
	{
		head = NULL;
	}
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	int top()
	{
		bool variable = isEmpty();
		if (variable)
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		return head->data;
	}
	void push(int data)
	{
		Node* temp = new Node;
		temp->data = data;
		temp->next = head;
		head = temp;
	}
	void pop() 
	{
		if (head == NULL)
		{
			cout << "Stack is empty" << endl;
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	int size()
	{
		Node* temp = head;
		int count = 0;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
	void display()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};