#include "libs.h"

template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node(T value) : data(value), next(nullptr) {}
};

template <class T>
class LinkedList
{
private:
	Node<T>* head;
public:
	LinkedList() : head(nullptr) {}
	void AddToHead(T value)
	{
		Node<T>* newNode = new Node<T>(value);
		newNode->next = head;
		head = newNode;
	}
	void AddToTail(T value)
	{
		Node<T>* newNode = new Node<T>(value);
		if (head == nullptr)
		{
			head = newNode;
			return;
		}
		Node<T>* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	void AddAtPos(T value, int pos)
	{
		if (pos < 0)
		{
			cout << "Invalid position" << endl;
			return;
		}
		if (pos == 0)
		{
			AddToHead(value);
			return;
		}
		Node<T>* newNode = new Node<T>(value);
		Node<T>* temp = head;
		for (int i = 0; i < pos - 1; i++) 
		{
			if (temp == nullptr) 
			{
				cout << "Invalid position" << endl;
				delete newNode;
				return;
			}
			temp = temp->next; 
		}
		if (temp == nullptr)
		{
			cout << "Invalid position" << endl;
			delete newNode;
			return;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	int FindNodePos(T value)
	{
		int pos = NULL;
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			pos++;
			if (temp->data == value)
			{
				break;
			}
			temp = temp->next;
		}
		return pos;
	}
	int ChangeNodesByValues(T value, T substitution)
	{
		int counter = 0;
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			if (temp->data == value)
			{
				temp->data = substitution;
				counter++;
			}
			temp = temp->next;
		}
		if (counter != 0)
			return counter;
		else
			return -1;
	}
	void ReverseList()
	{
		Node<T>* prev = nullptr;
		Node<T>* current = head;
		Node<T>* next = nullptr;
		while (current != nullptr)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}
	void DeleteAtPos(int pos)
	{
		if (pos < 0)
		{
			cout << "Invalid position" << endl;
			return;
		}
		if (pos == 0)
		{
			DeleteFromHead();
			return;
		}
		Node<T>* temp = head;
		for (int i = 0; i < pos - 1; i++)
		{
			if (temp == nullptr)
			{
				cout << "Invalid position" << endl;
				return;
			}
			temp = temp->next;
		}
		if (temp == nullptr || temp->next == nullptr)
		{
			cout << "Invalid position" << endl;
			return;
		}
		Node<T>* toDelete = temp->next;
		temp->next = temp->next->next;
		delete toDelete;
	}
	void DeleteFromHead()
	{
		if (head == nullptr)
		{
			cout << "List is empty" << endl;
			return;
		}
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}
	void DeleteFromTail()
	{
		if (head == nullptr)
		{
			cout << "List is empty" << endl;
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			return;
		}
		Node<T>* temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
	}
	void DeleteAll()
	{
		while (head != nullptr)
		{
			DeleteFromHead();
		}
	}
	void Show()
	{
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};