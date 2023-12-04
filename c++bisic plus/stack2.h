#include <iostream>
typedef unsigned long Item;

class Stack2
{
private:
	static const int MAX = 10;
	Item* pitems;
	int size;
	int top;
public:
	Stack2(int n = MAX);
	Stack2(const Stack2 &st);
	~Stack2();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	Stack2& operator=(const Stack2& st);

	friend std::ostream& operator<< (std::ostream& os, Stack2& st);
};
