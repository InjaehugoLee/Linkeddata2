#include "data3.h"
#include <iostream>
using namespace std;

//===========================================================================
//Stack�� �� ��Ҹ� �߰�
void StackA::Push(int item)
{
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
//Stack���κ��� �� ��Ҹ� ����
void StackA::Pop()
{
	if (Empty())
	{
		cout << "����ֽ��ϴ�." << endl;
	
	}
	nElements--;
	cout << data[nElements];
}
//Stack���κ��� �� ��Ҹ� �о����
int StackA::Top()
{
	return nElements;
}
//Stack�� �ִ� ���� ����� ��
int StackA::Number()
{
	return nElements;
}
//Stack�� �����?
int StackA::Empty()
{
	return nElements;
}
//Stack�� á��?
int StackA::Full()
{
	return (nElements == stacksize);
}

//===========================================================================
void StackL::Push(Node* item)
{

}
//Stack���κ��� �� ��Ҹ� ����
void StackL::Pop()
{
}
//Stack���κ��� �� ��Ҹ� �о����
Node* StackL::Top()
{
	return 0;
}
//Stack�� �ִ� ���� ����� ��
int StackL::Number()
{
	return 0;
}
//Stack�� �����?
int StackL::Empty()
{
	return 0;
}
//Stack�� á��?
int StackL::Full()
{
	return 0;
}