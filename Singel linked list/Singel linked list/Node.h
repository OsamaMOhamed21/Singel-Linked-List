#pragma once
template<class T >
struct Node
{
	T value;
	Node<T>* next;
	Node();
	Node(T value);
};


