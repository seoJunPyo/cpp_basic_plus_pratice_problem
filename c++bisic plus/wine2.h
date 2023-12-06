#include <string>
#include <valarray>
#include <iostream>
#include "pair.h"

using namespace std;

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine2 : private string, private PairArray
{
private:
	int years;
public:
	Wine2(const char* l, int y);
	Wine2(const char* l, int y, const int yr[], const int st[]);
	Wine2(const char* l, const ArrayInt& yr, const ArrayInt& st);
	Wine2(const char* l, const PairArray& yr_st);
	~Wine2() {};
	void GetBottles();
	string& Label() { return (string&)*this; };
	int sum();
	void Show();
};