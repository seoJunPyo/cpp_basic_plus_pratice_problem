#include "stack.h"
#include <memory>
#include <iostream>

Stack::Stack()
{
	memset(items, 0, sizeof(Item) * MAX);
	top = 0;
}

bool Stack::is_Empty() const
{
	return top == 0;
}

bool Stack::is_Full() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (is_Full())
		return false;

	items[top] = item;
	top++;

	return true;
}

bool Stack::pop(Item& item)
{
	if (is_Empty())
		return false;
	
	item = items[top - 1];
	top--;

	return true;
}

void Stack::show_stack(void (*show)(Item & item))
{
	for (int i = top - 1; i > 0; i--)
		show(items[i]);
}