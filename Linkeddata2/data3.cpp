#include "data3.h"
#include <iostream>
using namespace std;

//===========================================================================
//Stack에 한 요소를 추가
void StackA::Push(int item)
{
	if (Full())
	{
		cout << "더 이상 입력이 불가합니다." << endl;
	}
	else
	{
		data[nElements] = item;
		nElements++;
	}
}
//Stack으로부터 한 요소를 제거
void StackA::Pop()
{
	if (Empty())
	{
		cout << "비어있습니다." << endl;
	
	}
	nElements--;
	cout << data[nElements];
}
//Stack으로부터 한 요소를 읽어오기
int StackA::Top()
{
	return nElements;
}
//Stack에 있는 실제 요소의 수
int StackA::Number()
{
	return nElements;
}
//Stack이 비었나?
int StackA::Empty()
{
	return nElements;
}
//Stack이 찼나?
int StackA::Full()
{
	return (nElements == stacksize);
}

//===========================================================================
void StackL::Push(Node* item)
{

}
//Stack으로부터 한 요소를 제거
void StackL::Pop()
{
}
//Stack으로부터 한 요소를 읽어오기
Node* StackL::Top()
{
	return 0;
}
//Stack에 있는 실제 요소의 수
int StackL::Number()
{
	return 0;
}
//Stack이 비었나?
int StackL::Empty()
{
	return 0;
}
//Stack이 찼나?
int StackL::Full()
{
	return 0;
}