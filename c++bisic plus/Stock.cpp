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
		std::cout << "주식 수는 음수가 될 수 없음으로 " << company << " shares를 0으로 설정합니다." << std::endl;
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
		std::cout << "매입 주식 수는 음수가 될 수 없음으로 거래가 취소되었습니다." << std::endl;
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
		std::cout << "매도 주식 수는 음수가 될 수 없음으로 거래가 취소되었습니다." << std::endl;
	else if(num > shares)
		std::cout << "매도 주식 수는 보유 주식보다 많을 수 없음으로 거래가 취소되었습니다." << std::endl;
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

	os << "회사명 : " << st.company << "주식 수 : " << st.shares << std::endl;
	os << "주가 : " << st.share_val;
	os.precision(2);
	os << " 주식 총 가치 : $" << st.total_val << std::endl;

	os.setf(orig, ios_base::floatfield);
	os.precision(prec);

	return os;
}