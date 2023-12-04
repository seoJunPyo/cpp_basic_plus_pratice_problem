#include "stonewt.h"

using namespace std;

Stonewt::Stonewt(double lbs, Mode form)
{
	stone = int(lbs) / Lbs_pers_stn;
	pds_left = int(lbs) % Lbs_pers_stn + lbs - int(lbs);
	pounds = lbs;
	mode = form;
}

Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_pers_stn + lbs;
	mode = form;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = STONE;
}

Stonewt::~Stonewt()
{

}

void Stonewt::set_stone_mode()
{
	mode = Stonewt::STONE;
}

void Stonewt::set_int_pound_mode()
{
	mode = Stonewt::INT_POUND;
}

void Stonewt::set_dbl_pound_mode()
{
	mode = Stonewt::DBL_POUND;
}

Stonewt Stonewt::operator+(const Stonewt& st) const
{
	return Stonewt(pounds + st.pounds);
}


Stonewt Stonewt::operator-(const Stonewt& st) const
{
	return Stonewt(pounds - st.pounds);
}


Stonewt Stonewt::operator*(const Stonewt& st) const
{
	return Stonewt(pounds * st.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds * n);
}

bool Stonewt::operator<(const Stonewt& st) const
{
	return pounds < st.pounds;
}

bool Stonewt::operator>(const Stonewt& st) const
{
	return pounds > st.pounds;
}

bool Stonewt::operator>=(const Stonewt& st) const
{
	return pounds >= st.pounds;
}

bool Stonewt::operator<=(const Stonewt& st) const
{
	return pounds <= st.pounds;
}

bool Stonewt::operator==(const Stonewt& st) const
{
	return pounds == st.pounds;
}

bool Stonewt::operator!=(const Stonewt& st) const
{
	return pounds != st.pounds;
}

Stonewt operator*(double n, Stonewt& st)
{
	return st * n;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	if (st.mode == Stonewt::STONE)
	{
		os << st.stone << "스톤, " << st.pds_left << "파운드";
	}
	else if (st.mode == Stonewt::INT_POUND)
	{
		os << (int)st.pounds << "파운드";
	}
	else if (st.mode == Stonewt::DBL_POUND)
	{
		os << st.pounds << "파운드";
	}
	
	return os;
}

