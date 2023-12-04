#include "stack2.h"

Stack2::Stack2(int n)
{
	size = n;
	top = 0;
	pitems = new Item[n];
}

Stack2::Stack2(const Stack2& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];

	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
}

Stack2::~Stack2()
{
	delete[] pitems;
}

bool Stack2::isempty() const
{
	return top == 0;
}
bool Stack2::isfull() const
{
	return size == top;
}

bool Stack2::push(const Item& item)
{
	if (isfull())
		return false;

	pitems[top++] = item;

	return true;
}
bool Stack2::pop(Item& item)
{
	if (isempty())
		return false;

	item = pitems[top];
	pitems[top] = 0;
	top--;

	return true;
}

Stack2& Stack2::operator=(const Stack2& st)
{
	size = st.size;
	top = st.top;

	delete[] pitems;
	pitems = new Item[size];

	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];

	return *this;
}

std::ostream& operator<< (std::ostream& os, Stack2& st)
{
	for (int i = 0; i < st.top; i++)
		os << st.pitems[i] << " ";

	return os;
}
