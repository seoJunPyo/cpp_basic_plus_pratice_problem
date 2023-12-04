#include "complex0.h"

Complex::Complex(double r, double i)
{
	real_part = r;
	imaginary_part = i;
}

Complex::~Complex()
{

}

Complex Complex::operator+(Complex& com)
{
	return Complex(real_part + com.real_part, imaginary_part + com.imaginary_part);
}

Complex Complex::operator-(Complex& com)
{
	return Complex(real_part - com.real_part, imaginary_part - com.imaginary_part);
}

Complex Complex::operator*(Complex& com)
{
	return Complex(real_part * com.real_part, imaginary_part * com.imaginary_part);
}

Complex Complex::operator*(double n)
{
	return Complex(real_part * n, imaginary_part * n);
}

Complex Complex::operator~()
{
	return Complex(real_part, -imaginary_part);
}

Complex operator*(double n, Complex& com)
{
	return com * n;
}

std::istream& operator>>(std::istream& is, Complex& com)
{
	std::cout << "실수부 : ";
	if (!(is >> com.real_part))
		return is;

	std::cout << "허수부 : ";
	if (!(is >> com.imaginary_part))
		return is;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Complex& com)
{
	os << "(" << com.real_part << "," << com.imaginary_part << "i)";

	return os;
}