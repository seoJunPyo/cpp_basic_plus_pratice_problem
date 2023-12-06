#include <iostream>
#include "queue.h"

template <class T>
class QueueTp
{
private:
	class Node
	{
	public :
		T data;
		Node* next;
		Node(const T& new_data) : data(new_data), next(nullptr) {};
	};

	Node* front;
	Node* rear;
	int size;

public :
	QueueTp(int q_size = 0) : front(nullptr), rear(nullptr), size(0) {};
	bool Enqueue(const T& new_data);
	bool Dequeue(T& popped);
	int Size();
	bool isEmpty() const;
	void Show(void (*fp)(const T));
};


template <class T>
bool QueueTp<T>::Enqueue(const T& new_data)
{
	try
	{
		Node* new_node = new Node(new_data);

		if (isEmpty())
			front = new_node;
		else
			rear->next = new_node;

		rear = new_node;
		size++;

		return true;
	}
	catch (std::bad_alloc)
	{
		return false;
	}
}

template <class T>
bool QueueTp<T>::Dequeue(T& popped)
{
	if (isEmpty())
		return false;

	Node* p_node = front;
	popped = p_node->data;
	front = front->next;
	size--;

	if (isEmpty())
		rear = nullptr;

	return true;
}

template <class T>
int QueueTp<T>::Size()
{
	return size;
}

template <class T>
bool QueueTp<T>::isEmpty() const
{
	return size == 0;
}


template <class T>
void QueueTp<T>::Show(void (*fp)(const T))
{

	Node* current = front;

	while (current != nullptr)
	{
		
		(*fp)(current->data);
		current = current->next;
	}
}




