#include "Q4.h"

struct PizzaCompany
{
	string name;
	double diameter;
	double weight;
};

int Q4_8()
{
	PizzaCompany *pizza_company = new PizzaCompany;

	cout << "피자의 지름 입력 : ";
	cin >> pizza_company->diameter;
	cout << "회사명 입력 : ";
	getline(cin, pizza_company->name);
	cout << "피자의 중량 입력 : ";
	cin >> pizza_company->weight;

	cout << "회사명 : " << pizza_company->name << endl;
	cout << "피자의 지름 : " << pizza_company->diameter << endl;
	cout << "피자의 중량 : " << pizza_company->weight << endl;

	delete pizza_company;

	return 0;
}