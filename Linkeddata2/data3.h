// Array
class StackA {
	// Array
	int* data;
	int nElements;
	int stacksize;

public:
	StackA(int i = 5) : nElements(0) {
		stacksize = i;
		data = new int[stacksize];
	}
	~StackA() {
		delete[] data;
	}
	//�� ��Ҹ� Stack�� �߰�
	void Push(int item);
	//Stack���κ��� �� ��Ҹ� ����
	void Pop();
	//Stack���κ��� �� ��Ҹ� �о����
	int Top();
	//Stack�� �ִ� ���� ����� ��
	int Number();
	//Stack�� �����?
	int Empty();
	//Stack�� á��?
	int Full();
};
//====================================================================================
// Linked_List or Double Linked_List

class Node {
public:
	int data;
	Node* next = 0;
	Node* prev = 0;
	Node(int d = 0) {
		data = d;
	}
	~Node() {   }
};

class StackL {
	int mode;	// ���� ����ϴ� ������ ���� Ÿ��
				// 1 : Linked_List
				// 2 : Double Linked_List

	// Linked-List, Double Linked-List
	Node* head;
	Node* tail;

public:
	StackL(int m = 1) {
		mode = m;
		head = 0;
		tail = 0;
	}
	~StackL() {
	}
	//�� ��Ҹ� Stack�� �߰�
	void Push(Node* item);
	//Stack���κ��� �� ��Ҹ� ����
	void Pop();
	//Stack���κ��� �� ��Ҹ� �о����
	Node* Top();
	//Stack�� �ִ� ���� ����� ��
	int Number();
	//Stack�� �����?
	int Empty();
	//Stack�� á��?
	int Full();
};
