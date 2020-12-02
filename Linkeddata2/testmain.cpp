#include <iostream>
#include "data3.h"

using namespace std;

int main()
{
	StackA s;

	s.Push(10);
	cout << s.Top() << endl;
	s.Pop();

	StackL l;
	Node a(10);
	l.Push(&a);
	Node* t = l.Top();
	cout << t->data << endl;
	l.Pop();


}