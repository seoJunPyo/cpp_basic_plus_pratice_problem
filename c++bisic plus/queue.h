class Customer
{
private :
	long arrive;
	int process_time;
public :
	Customer() { arrive = process_time = 0; };
	void set(long when);
	long when() const { return arrive; };
	int ptime() const { return process_time; };
};

typedef Customer Item;

class Queue
{
private :
	struct Node
	{
		Item item;
		Node* next;
	};
	enum { Q_SIZE = 10 };

	Node* front;
	Node* rear;
	int items;
	const int q_szie;
	Queue(const Queue& q) : q_szie(0) {};
	Queue& operator=(const Queue& q) { return *this; };

public : 
	Queue(int qs = Q_SIZE);
	bool isempty() const;
	bool isfull() const;
	int queue_count() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
 };