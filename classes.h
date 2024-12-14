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
	bool isEmpty() const
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	int top() const
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
	int size() const
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
	void display() const
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	void clear()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
	Node* copyFunc()
	{
		if (isEmpty()) {
			return nullptr;
		}
		StackList newStack;
		Node* temp = head;
		while (temp != nullptr) {
			newStack.push(temp->data);
			temp = temp->next;
		}
		StackList finalStack;
		Node* newTemp = newStack.head;
		while (newTemp != nullptr) {
			finalStack.push(newTemp->data);
			newTemp = newTemp->next;
		}
		return finalStack.head;
	}
	StackList& operator=(const StackList& other) {
		if (this == &other) {
			return *this;
		}

		clear();

		Node* temp = other.head;
		StackList reverseStack;

		while (temp != nullptr) {
			reverseStack.push(temp->data);
			temp = temp->next;
		}

		Node* reverseTemp = reverseStack.head;
		while (reverseTemp != nullptr) {
			push(reverseTemp->data);
			reverseTemp = reverseTemp->next;
		}

		return *this;
	}
	StackList operator+(const StackList& other) const {
		StackList newStack;
		Node* temp = head;
		while (temp != nullptr) {
			newStack.push(temp->data);
			temp = temp->next;
		}
		temp = other.head;
		while (temp != nullptr) {
			newStack.push(temp->data);
			temp = temp->next;
		}
		StackList finalStack;
		Node* newTemp = newStack.head;
		while (newTemp != nullptr) {
			finalStack.push(newTemp->data);
			newTemp = newTemp->next;
		}

		return finalStack;
	}
	StackList operator*(const StackList& other) const {
		StackList newStack;

		Node* temp1 = head;
		while (temp1 != nullptr) {
			Node* temp2 = other.head;
			while (temp2 != nullptr) {
				if (temp1->data == temp2->data) {
					newStack.push(temp1->data);
					break;
				}
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
		}
		StackList finalStack;
		Node* newTemp = newStack.head;
		while (newTemp != nullptr) {
			finalStack.push(newTemp->data);
			newTemp = newTemp->next;
		}
		return finalStack;
	}
	~StackList()
	{
		clear();
	}
};