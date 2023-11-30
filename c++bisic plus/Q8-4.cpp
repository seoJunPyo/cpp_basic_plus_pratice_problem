#include "Q8.h"

struct stringy
{
	char* str;
	int ct;
};

static void show(const stringy& stry, int n = 1);
static void show(const char * str, int n = 1);
static void set(stringy& stry, const char* str);

int Q8_4()
{
	stringy benny;
	char testing[] = "Reality isn`t what it used to be.";

	set(benny, testing);
	show(benny);
	show(benny, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
} 


static void show(const stringy& stry, int n)
{
	for (int i = 0; i < n; i++)
		cout << stry.str << endl;
}

static void show(const char* str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}

static void set(stringy& stry, const char* str)
{
	int size = (int)strlen(str) + 1;

	stry.str = new char[size];
	strcpy_s(stry.str, size, str);
	stry.ct = size;
;}