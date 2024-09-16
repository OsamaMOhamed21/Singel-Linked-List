#pragma once
#include "Node.h"
template<class T >
class LinkedList
{
	Node<T>* head;
	int size;
public:
	LinkedList();
	~LinkedList();
	void push_front(T value);
	void push_back(T value);

	void pop_front();
	void pop_back();

	void insert(int index, T value);
	void erase(int index);

	void print();

};

