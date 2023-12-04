#include <iostream>

class Stonewt
{
private :
	enum Mode { STONE, INT_POUND, DBL_POUND, };
	enum { Lbs_pers_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode mode;

public :
	Stonewt(double lbs, Mode form = STONE);
	Stonewt(int stn, double lbs, Mode form = STONE);
	Stonewt();
	~Stonewt();
	void set_stone_mode();
	void set_int_pound_mode();
	void set_dbl_pound_mode();
	
	Stonewt operator+(const Stonewt& st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(const Stonewt& st) const;
	Stonewt operator*(double n) const;
	bool operator<(const Stonewt& st) const;
	bool operator>(const Stonewt& st) const;
	bool operator>=(const Stonewt& st) const;
	bool operator<=(const Stonewt& st) const;
	bool operator==(const Stonewt& st) const;
	bool operator!=(const Stonewt& st) const;

	friend Stonewt operator*(double n, Stonewt& st);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};