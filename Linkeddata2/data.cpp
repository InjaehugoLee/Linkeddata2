//10��-2. Stack1.cpp
//generic class Stack�� member �Լ� ����
#include <iostream>
#include "header.h"
using namespace std;
void Stack::Push(TYPE item) {
	if (Full())
	{
		cout << "�� �̻� �Է��� �Ұ��մϴ�." << endl;
	}
	else
	{
		data[nElements] = item;
		nElements++;
	}
}
TYPE Stack::Pop() {
	if (Empty())
	{
		cout << "����ֽ��ϴ�." << endl;
		return -1;
	}
	nElements--;
	return data[nElements];
}
int Stack::Number() {
	return nElements;
}
int Stack::Empty() {
	return (nElements == 0);
}
int Stack::Full() {
	return (nElements == stacksize);
}
