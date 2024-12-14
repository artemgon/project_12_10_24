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