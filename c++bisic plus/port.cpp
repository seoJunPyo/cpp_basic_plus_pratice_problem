#include "port.h"

Port::Port(const char* br, const char* st, int b)
{
	int len = (unsigned int)strlen(br);
	brand = new char[len + 1];

	strcpy_s(brand, len + 1, br);
	strncpy_s(style, 20, st, 19);
	bottles = b;
}

Port::Port(const Port& p)
{
	int len = (unsigned int)strlen(p.brand);
	brand = new char[len + 1];

	strcpy_s(brand, len + 1, p.brand);
	strncpy_s(style, 20, p.style, 19);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return *this;

	delete[] brand;

	int len = (unsigned int)strlen(p.brand);
	brand = new char[len + 1];

	strcpy_s(brand, len + 1, p.brand);
	strncpy_s(style, 20, p.style, 19);
	bottles = p.bottles;

	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;

	return *this;
}

Port& Port::operator-=(int b)
{
	bottles -= b;

	return *this;
}

void Port::Show() const
{
	cout << "브랜드 : " << brand << endl;
	cout << "스타일 : " << style << endl;
	cout << "수량 : " << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;

	return os;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y) : Port(br, st, b)
{
	int len = (unsigned int)strlen(nn);
	nickname = new char[len + 1];

	strcpy_s(nickname, len + 1, nn);
	year = y;
}
 
VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	int len = (unsigned int)strlen(vp.nickname);
	nickname = new char[len + 1];

	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;

	Port::operator=(vp);
	int len = (unsigned int)strlen(vp.nickname);
	nickname = new char[len + 1];

	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;

	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "별칭 : " << nickname << endl;
	cout << "빈티지 : " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp << ", " << vp.nickname << ", " << vp.year;

	return os;
}