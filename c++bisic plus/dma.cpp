#include "dma.h"

DMA::DMA(const char* l, int r)
{
	int len = (unsigned int)strlen(l);
	label = new char[len + 1];
	strcpy_s(label, len + 1, l);

	rating = r;
}

DMA::DMA(const DMA& rs)
{
	int len = (unsigned int)strlen(rs.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, rs.label);

	rating = rs.rating;
}

DMA::~DMA()
{
	delete[] label;
}

DMA& DMA::operator=(const DMA& rs)
{
	if (this == &rs)
		return *this;

	delete[] label;
	int len = (unsigned int)strlen(rs.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, rs.label);

	rating = rs.rating;

	return *this;
}

void DMA::Veiw() const
{
	std::cout << "Label : " << label << std::endl;
	std::cout << "Rating : " << rating << std::endl;
}

std::ostream& operator<<(std::ostream& os, const DMA& rs)
{
	os << "Label : " << rs.label << std::endl;
	os << "Rating : " << rs.rating << std::endl;

	return os;
}


baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;

	DMA::operator=(rs);

	return *this;
}

void baseDMA::Veiw() const
{
	DMA::Veiw();
}

std::ostream& operator<<(std::ostream& os,const baseDMA& rs)
{
	os << (const DMA&)rs;

	return os;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) : DMA(l, r)
{
	strncpy_s(color, COL_LEN, c, COL_LEN - 1);
}

lacksDMA::lacksDMA(const char* c, const DMA& rs) : DMA(rs)
{
	strncpy_s(color, COL_LEN, c, COL_LEN - 1);
}

lacksDMA::lacksDMA(const lacksDMA& rs) : DMA(rs)
{
	strncpy_s(color, COL_LEN, rs.color, COL_LEN - 1);
}

lacksDMA& lacksDMA::operator=(const lacksDMA& rs)
{
	if (this == &rs)
		return *this;

	DMA::operator=(rs);
	strncpy_s(color, COL_LEN, rs.color, COL_LEN - 1);

	return *this;
}

void lacksDMA::Veiw() const
{
	DMA::Veiw();
	std::cout << "Color : " << color << std::endl;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& rs)
{
	os << (const DMA&)rs;
	os << "Color : " << rs.color << std::endl;

	return os;
}

hasDMA::hasDMA(const char* s, const char* l, int r) : DMA(l, r)
{
	int len = (unsigned int)strlen(s);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}

hasDMA::hasDMA(const char* s, const DMA& rs) : DMA(rs)
{
	int len = (unsigned int)strlen(s);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}

hasDMA::hasDMA(const hasDMA& rs) : DMA(rs)
{
	int len = (unsigned int)strlen(rs.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, rs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& rs)
{
	if (this == &rs)
		return *this;

	DMA::operator=(rs);

	delete[] style;
	int len = (unsigned int)strlen(rs.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, rs.style);

	return *this;
}

void hasDMA::Veiw() const
{
	DMA::Veiw();
	std::cout << "Style : " << style << std::endl;
}


std::ostream& operator<<(std::ostream& os, const hasDMA& rs)
{
	os << (const DMA&)rs;
	os << "Style : " << rs.style << std::endl;

	return os;
} 