#include "move.h"
#include <iostream>

Move::Move(double x, double y)
{
	x_ = x;
	y_ = y;
}

void Move::showmove() const
{
	using namespace std;
	cout << "x : " << x_ << endl;
	cout << "y : " << y_ << endl;
}

Move Move::add(const Move& m) const
{
	double x = x_ + m.x_;
	double y = y_ + m.y_;

	return Move(x, y);
}

void Move::reset(double x, double y)
{
	x_ = x;
	y_ = y;
}