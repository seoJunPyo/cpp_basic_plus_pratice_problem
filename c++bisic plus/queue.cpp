#include "queue.h"
#include <cstdlib>

Queue::Queue(int qs) : q_szie(qs)
{
	front = rear = NULL;
	items = 0;
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == q_szie;
}

int Queue::queue_count() const
{
	return items;
}

bool Queue::enqueue(const Item& item)
{
	if (isfull())
		return false;

	Node* new_node = new Node;
	new_node->item = item;
	new_node->next = NULL;

	if (front == NULL)
		front = new_node;
	else
		rear->next = new_node;

	rear = new_node;
	items++;

	return true;
}

bool Queue::dequeue(Item& item)
{
	if (front == NULL)
		return false;

	item = front->item;

	Node* temp = front;
	front = front->next;
	delete temp;
	items--;

	if (items == 0)
		rear = NULL;

	return true;
}

void Customer::set(long when)
{
	process_time = std::rand() % 3 + 1;
	arrive = when;
}