#include "abstr_emp.h"

abstr_emp::abstr_emp() 
	: f_name(""), l_name(""), job("") {}

abstr_emp::abstr_emp(const string& fn, const string& ln, const string& j)
	: f_name(fn), l_name(ln), job(j) {}

void abstr_emp::ShowAll() const
{
	cout << "이름 : " << l_name << ", " << f_name << endl;
	cout << "직업 : " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "성 : ";
	getline(cin, l_name);
	cout << "이름 : ";
	getline(cin, f_name);
	cout << "직업 : ";
	getline(cin, job);
}

ostream& operator<<(ostream& os, const abstr_emp& e)
{
	e.ShowAll();
	return os;
}

abstr_emp::~abstr_emp() {}

employee::employee() 
	: abstr_emp() {}

employee::employee(const string& fn, const string& ln, const string& j)
	: abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager() 
	: abstr_emp(), inchargeof(0) {}

manager::manager(const string& fn, const string& ln, const string& j, int ico)
	: abstr_emp(fn, ln, j) , inchargeof(ico) {}

manager::manager(const abstr_emp& e, int ico)
	: abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager& m)
	: abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "inchargeof : " << inchargeof << endl;
}

void manager::SetAll() 
{
	abstr_emp::SetAll();
	cout << "inchargeof 입력 : "; 
	cin >> inchargeof;
	while (cin.get() != '\n')
		continue;
}

fink::fink()
	: abstr_emp(), reportsto("") {}

fink::fink(const string& fn, const string& ln, const string& j, const string& rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp& e, const string& rpo)
	:abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& f)
	:abstr_emp(f), reportsto(f.reportsto) {}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "reportsto : " << reportsto << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "reportsto 입력 : "; 
	cin >> reportsto;
	while (cin.get() != '\n')
		continue;
}

highfink::highfink()
	: manager(), fink() {}

highfink::highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico)
	:abstr_emp(fn, ln, j),  manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp& e, const string& rpo, int ico)
	: abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink& f, int ico)
	: abstr_emp(f), manager(f, ico), fink(f) {}

highfink::highfink(const manager& m, const string& rpo)
	: abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink& h)
	: abstr_emp(h), manager(h, h.InChargeOf()), fink(h, h.ReportsTo()) {}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "inchargeof : " << manager::InChargeOf() << endl;
	cout << "reportsto : " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();

	cout << "inchargeof 입력 : "; 
	cin >> manager::InChargeOf();
	cin.get();

	cout << "reportsto 입력 : "; 
	getline(cin, fink::ReportsTo());
}