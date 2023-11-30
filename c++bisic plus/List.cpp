#include "List.h"

Node* List::creat_node(int new_item)
{
	using namespace std;

	try
	{
		Node* new_node = new Node;
		new_node->data = new_item;
		new_node->next = NULL;

		return new_node;
	}
	catch(bad_alloc)
	{
		cout << "메모리가 부족합니다." << endl;
		
		return NULL;
	}
}

bool List::append(int new_data)
{
	Node* new_node = creat_node(new_data);

	if (new_node == NULL)
		return  false;

	if (head == NULL)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}

	items++;
	return true;
}

Node* List:: pop()
{
	Node* current = head;
	Node* popped = tail;

	while (current->next != tail)
		current = current->next;

	current->next = NULL;
	tail = current;
	items--;

	return popped;
}

bool List::isEmpty()
{
	return head == NULL;
}

bool List::isFull()
{
	using namespace std;

	try
	{
		Node* temp = new Node;

		return true;
	}
	catch (bad_alloc)
	{
		return false;
	}
}

void List::visit(void(*pf)(Node*))
{
	Node* current = head;

	while (current != NULL)
	{
		(*pf)(current);
		current = current->next;
	}
}

int List::get_items()
{
	return items;
}