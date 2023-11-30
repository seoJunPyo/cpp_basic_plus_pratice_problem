#include "Q10.h"
#include "stack.h"

customer* create_customer(const char* fullname, double payment);
void show_customer(Item &item);

int Q10_5()
{
	Stack customer_list;

	customer_list.push(*create_customer("seo", 300));
	customer_list.push(*create_customer("jun", 200));
	customer_list.push(*create_customer("pyo", 100));
	customer_list.push(*create_customer("blue", 1000));
	customer_list.push(*create_customer("archive", 500));
	customer_list.push(*create_customer("hifumi", 200));

	customer_list.show_stack(show_customer);
	
	Item temp;
	customer_list.pop(temp);
	show_customer(temp);
	customer_list.pop(temp);
	show_customer(temp);

	customer_list.show_stack(show_customer);

	return 0;
}

customer* create_customer(const char * fullname, double payment)
{
	customer* new_customer = new customer;

	strcpy_s(new_customer->fullname, 35, fullname);
	new_customer->payment = payment;

	return new_customer;
}

void show_customer(Item &item)
{
	cout << "이름 : " << item.fullname << endl;
	cout << "지불 금액 : " << item.payment << endl;
	cout << "-------------------------------" << endl;
}