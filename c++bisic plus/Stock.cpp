#include "stock.h"

Stock::Stock()
{
	company = nullptr;
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char* co, long n, double pr)
{
	int len = (int)strlen(co);
	company = new char[len + 1];
	strcpy_s(company, len + 1, co);

	if (n < 0)
	{
		std::cout << "�ֽ� ���� ������ �� �� �������� " << company << " shares�� 0���� �����մϴ�." << std::endl;
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	delete[] company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
		std::cout << "���� �ֽ� ���� ������ �� �� �������� �ŷ��� ��ҵǾ����ϴ�." << std::endl;
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
		std::cout << "�ŵ� �ֽ� ���� ������ �� �� �������� �ŷ��� ��ҵǾ����ϴ�." << std::endl;
	else if(num > shares)
		std::cout << "�ŵ� �ֽ� ���� ���� �ֽĺ��� ���� �� �������� �ŷ��� ��ҵǾ����ϴ�." << std::endl;
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
const Stock& Stock::topval(const Stock& s) const
{
	return s.total_val > total_val ? s : *this;
}

std::ostream& operator<<(std::ostream& os, const Stock& st)
{
	using std::ios_base;

	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);

	os << "ȸ��� : " << st.company << "�ֽ� �� : " << st.shares << std::endl;
	os << "�ְ� : " << st.share_val;
	os.precision(2);
	os << " �ֽ� �� ��ġ : $" << st.total_val << std::endl;

	os.setf(orig, ios_base::floatfield);
	os.precision(prec);

	return os;
}