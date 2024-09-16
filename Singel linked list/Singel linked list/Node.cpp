#include "Node.h"
template<class T>
inline Node<T>::Node()
{
	next = nullptr;
}
template<class T>
inline Node<T>::Node(T value) : value(value)
{
	next = nullptr;
}

template class Node<int>;
template class Node<float>;
template class Node<double>;
template class Node<char>;
