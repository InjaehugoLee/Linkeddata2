//10��-1 Stack.h
//generic ��ü��� ������ class Stack�� ���� ��ü�� ��ó���⿡ ����
//TYPE�� macro ���� �� �ۼ��� �������� ġȯ�� �� �����ȴ�.
#define TYPE int

struct doubleNode{
	int data;
	doubleNode* prev;
	doubleNode* next;
};

class doublyLinkedList {
private:
	doubleNode* head;
	int length;
public:
	doublyLinkedList() {
		length = 0;
		head->data = 0;
		head->prev = NULL;
		head->next = NULL;
	}
	~doublyLinkedList() {

	}
	void main(){

		pu
	};

};





class Stack {
	TYPE* data;
	int nElements;
	int stacksize;

public:
	Stack(int i = 5) : nElements(0) {
		stacksize = i;
		data = new TYPE[stacksize];
	}
	~Stack() {
		delete[] data;
	}
	//�� ��Ҹ� Stack�� �߰�
	void Push(TYPE item);
	//Stack���κ��� �� ��Ҹ� ����
	TYPE Pop();
	//Stack�� �ִ� ���� ����� ��
	int Number();
	//Stack�� �����?
	int Empty();
	//Stack�� á��?
	int Full();
};
