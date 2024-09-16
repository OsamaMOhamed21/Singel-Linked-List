#include "linkedList.h"
#include <iostream>
using namespace std;
int main()
{
	LinkedList<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.pop_front();
	l.pop_back();
	l.push_front(5);
	l.erase(1);
	l.insert(1, 5);
	l.erase(0);
	l.print();
}


