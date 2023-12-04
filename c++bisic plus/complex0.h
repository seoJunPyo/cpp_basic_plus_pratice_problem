#include <iostream>

class Complex
{
private:
	double real_part;
	double imaginary_part;
public:
	Complex(double r = 0, double i = 0);
	~Complex();

	Complex operator+(Complex& com);
	Complex operator-(Complex& com);
	Complex operator*(Complex& com);
	Complex operator*(double n);
	Complex operator~();

	friend Complex operator*(double n, Complex& com);
	friend std::istream& operator>>(std::istream& is, Complex& com);
	friend std::ostream& operator<<(std::ostream& os, const Complex& com);
};

