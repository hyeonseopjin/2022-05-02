#include <iostream>

using namespace std;

struct node
{
	int data;
	node* nextNode;
};

class LinkedList
{
private:
	node* head;
	node* tail;
public:
	LinkedList() :head(NULL), tail(NULL)
	{
	}
	void addFrontNode(int n);
	void addNode(int n);
	void insertNode(node* prevNode, int n);
	void deleteNode(node* prevNode);
	node* getHead()
	{
		return head;
	}
	void display(node* head);
};

int main()
{
	LinkedList list;
	list.addNode(1);
	list.addNode(2);
	list.addNode(3);

	cout << "1,2,3을 LinkedList에 추가\n";
	list.display(list.getHead());

	list.addFrontNode(0);
	list.insertNode(list.getHead()->nextNode->nextNode, 1);
	cout << "0을 첫번째에 추가, 1을 네번째에 추가\n";
	list.display(list.getHead());

	list.deleteNode(list.getHead()->nextNode);

	cout << "세번째 노드를 삭제\n";
	list.display(list.getHead());

	return 0;
}

void LinkedList::addFrontNode(int n)
{
	node* temp = new node;
	temp->data = n;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->nextNode = head;
		head = temp;
	}
}

void LinkedList::addNode(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->nextNode = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->nextNode = temp;
		tail = temp;
	}
}

void LinkedList::insertNode(node* prevNode, int n)
{
	node* temp = new node;
	temp->data = n;
	temp->nextNode = prevNode->nextNode;
	prevNode->nextNode = temp;
}

void LinkedList::deleteNode(node* prevNode)
{
	node* temp = prevNode->nextNode;
	prevNode->nextNode = temp->nextNode;
	delete temp;
}

void LinkedList::display(node* head)
{
	if (head == NULL)
	{
		cout << "\n";
	}
	else
	{
		cout << head->data << " ";
		display(head->nextNode);
	}
	cout << endl;
}
