#include <string>
#include <valarray>
#include <iostream>
#include "pair.h"

using namespace std;

class Wine
{
private:
	typedef valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	string name;
	PairArray bottles;
	int years;
public:
	Wine(const char* l, int y);
	Wine(const char* l, int y, const int yr[], const int st[]);
	Wine(const char* l, const ArrayInt& yr, const ArrayInt& st);
	Wine(const char* l, const PairArray& yr_st);
	~Wine() {};
	void GetBottles();
	string& Label() { return name; };
	int sum();
	void Show();
};