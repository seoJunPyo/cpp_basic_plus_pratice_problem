#include <iostream>

struct Node
{
	int data;
	Node* next;
};

class List
{
	Node* head;
	Node* tail;
	int items;
	Node* creat_node(int new_item);

public :
	List() { 
		head = NULL; 
		tail = NULL; 
		items = 0; 
	};
	bool append(int new_data);
	Node* pop();
	bool isEmpty();
	bool isFull();
	void visit(void(*pf)(Node *));
	int get_items();
};