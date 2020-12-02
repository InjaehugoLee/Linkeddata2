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
	//한 요소를 Stack에 추가
	void Push(int item);
	//Stack으로부터 한 요소를 제거
	void Pop();
	//Stack으로부터 한 요소를 읽어오기
	int Top();
	//Stack에 있는 실제 요소의 수
	int Number();
	//Stack이 비었나?
	int Empty();
	//Stack이 찼나?
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
	int mode;	// 현재 사용하는 데이터 저장 타입
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
	//한 요소를 Stack에 추가
	void Push(Node* item);
	//Stack으로부터 한 요소를 제거
	void Pop();
	//Stack으로부터 한 요소를 읽어오기
	Node* Top();
	//Stack에 있는 실제 요소의 수
	int Number();
	//Stack이 비었나?
	int Empty();
	//Stack이 찼나?
	int Full();
};
