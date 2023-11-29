#include "Q7.h"

typedef double (*calc_func) (double, double);
static double calculate(double x, double y, calc_func);
static double add(double x, double y);
static double subtract(double x, double y);
static double multiply(double x, double y);
static double divide(double x, double y);

int Q7_10()
{
	cout << "두 수를 입력 : ";

	double x, y;
	cin >> x >> y;

	calc_func calc_funcs[4] = { add, subtract ,multiply , divide };

	for (int i = 0; i < 4; i++)
		cout << calculate(x, y, calc_funcs[i]) << endl;

	return 0;
}

static double calculate(double x, double y, calc_func func)
{
	return func(x, y);
}

static double add(double x, double y)
{
	return x + y;
}

static double subtract(double x, double y)
{
	return x - y;

}

static double multiply(double x, double y)
{
	return x * y;
}

static double divide(double x, double y)
{
	return x / y;
}