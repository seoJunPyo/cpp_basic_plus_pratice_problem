#include "vector.h"
#include <cmath>
using namespace std;

namespace VECTOR
{
	const double Rad_to_deg = 45.0;

	double Vector::magval() const
	{
		if (mode == POL)
		{
			return x;
		}
		else
		{
			return  sqrt(x * x + y * y);
		}
	}

	double Vector::angval() const
	{
		if (mode == POL)
		{
			return y / Rad_to_deg;
		}
		else
		{
			return atan2(y, x);
		}
	}

	Vector::Vector()
	{
		x = y = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			x = n1 * cos(n2);
			y = n1 * sin(n2);
		}
		else
		{
			cout << "Vector 객체 모드 지정이 잘못되었습니다." << endl;
			cout << "백터를 0으로 설정합니다." << endl;

			x = 0;
			y = 0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			x = n1 * cos(n2);
			y = n1 * sin(n2);
		}
		else
		{
			cout << "Vector 객체 모드 지정이 잘못되었습니다." << endl;
			cout << "백터를 0으로 설정합니다." << endl;

			x = 0;
			y = 0;
			mode = RECT;
		}
	}
	
	Vector::~Vector()
	{

	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	Vector operator* (double n, const Vector& a)
	{
		return a * n;
	}

	ostream& operator<<(ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
			os << "(m, a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")";
		else
			os << "Vector 객체 모드 지정이 틀렸습니다." << endl;

		return os;
	}
}
