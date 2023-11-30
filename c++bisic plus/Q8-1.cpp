#include "Q8.h"

void print_str(const char* str, int n = 0);

int Q8_1()
{
	print_str("hi");
	print_str("hello");
	print_str("blue");
	print_str("blue archive", 2);
	return 0;
}

void print_str(const char* str, int n)
{
	static int call_count = 0;

	if (n == 0)
		cout << str << endl;
	else
		for (int i = 0; i < call_count; i++)
			cout << str << endl;

	call_count++;
}