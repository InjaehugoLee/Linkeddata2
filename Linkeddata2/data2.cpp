//10��-3 Stack_use.cpp
//class Stack�� instance ����
#include <iostream>
#include "header.h"
//���� stack ����
using namespace std;
void main() {

	Stack* a = new Stack(2);
	a->Push(100);
	a->Push(200);
	a->Push(300);
	a->Push(400);
	a->Push(500);

	a->Pop();
	a->Pop();
	a->Pop();
	a->Push(10);
	a->Push(5);
	//���� stack�� �ִ´�


	//stack�� ���鼭 ��Ҹ� ���
	while (!a->Empty())
		cout << a->Pop() << endl;
	delete a;
	system("pause");
}