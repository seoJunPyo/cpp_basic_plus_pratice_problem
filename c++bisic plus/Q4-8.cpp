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

	cout << "������ ���� �Է� : ";
	cin >> pizza_company->diameter;
	cout << "ȸ��� �Է� : ";
	getline(cin, pizza_company->name);
	cout << "������ �߷� �Է� : ";
	cin >> pizza_company->weight;

	cout << "ȸ��� : " << pizza_company->name << endl;
	cout << "������ ���� : " << pizza_company->diameter << endl;
	cout << "������ �߷� : " << pizza_company->weight << endl;

	delete pizza_company;

	return 0;
}