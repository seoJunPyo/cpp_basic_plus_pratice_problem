struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
	static const int MAX = 10;
	Item items[MAX];
	int top;

public :
	Stack();
	bool is_Empty() const;
	bool is_Full() const;
	bool push(const Item& item);
	bool pop(Item& item);
	void show_stack(void (*show)(Item& item));
};