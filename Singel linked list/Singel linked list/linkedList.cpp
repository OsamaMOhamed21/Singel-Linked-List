#include "linkedList.h"
#include<iostream>
using namespace std;
template<class T>
inline LinkedList<T>::LinkedList()
{
	head = nullptr;
}

template<class T>
LinkedList<T>::~LinkedList()
{
while (head != nullptr)
{
	pop_front();
}
}

template<class T>
void LinkedList<T>::push_front(T value)
{
	Node <T>* newNode = new Node<T>(value);
	size++;
	if (head == nullptr)
	{
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
}

template<class T>
void LinkedList<T>::push_back(T value)
{
	Node<T>* newNode = new Node<T>(value);
	size++;
	if (head == nullptr)
	{
		head = newNode;
		return;
	}
	Node<T>* crr;
	crr = head;
	while (crr->next != nullptr)
	{
		crr = crr->next;
	}
	crr->next = newNode;
}

template<class T>
void LinkedList<T>::pop_front()
{
	if (head == nullptr)
	{
		return;
	}
	Node<T>* tmp;
	tmp = head;
	head = head->next;
	delete tmp;
	size--;
}

template<class T>
void LinkedList<T>::pop_back()
{
	if (head == nullptr)
	{
		return;
	}
	if (size == 1)
	{
		pop_front();
		return;
	}
	Node<T>* crr = head;
	Node<T>* prev = head;
	while (crr->next != nullptr)
	{
		prev = crr;
		crr = crr->next;
	}
	prev->next = nullptr;
	delete crr;
	size--;
}

template<class T>
void LinkedList<T>::insert(int index, T value)
{
	Node<T>* newNode = new Node<T>(value);
	size++;
	if (head == nullptr)
	{
		push_front(value);
		return;
	}
	if (index == 0)
	{
		push_front(value);
		return;
	}
	Node<T>* crr = head;
	Node<T>* prev = head;
	for (int i = 0; i < index; i++)
	{
		prev = crr;
		crr = crr->next;
	}
	prev->next = newNode;
	newNode->next = crr;
}

template<class T>
void LinkedList<T>::erase(int index)
{
	if (head == nullptr)
	{
		return;
	}
	if (index == 0)
	{
		pop_front();
		return;
	}
	Node<T>* crr = head;
	Node<T>* prev = head;
	for (int i = 0; i < index; i++)
	{
		prev = crr;
		crr = crr->next;
	}
	prev->next = crr->next;
	delete crr;
	size--;
}

template<class T>
void LinkedList<T>::print()
{
	Node<T>* crr = head;
	while (crr != nullptr)
	{
		cout << crr->value << endl;
		crr = crr->next;
	}
}


template class LinkedList<int>;
template class LinkedList<float>;
template class LinkedList<double>;
template class LinkedList<char>;


