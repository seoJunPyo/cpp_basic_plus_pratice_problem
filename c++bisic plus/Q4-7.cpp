#include "Q4.h"

struct PizzaCompany
{
	string name;
	double diameter;
	double weight;
};

int Q4_7()
{
	PizzaCompany pizza_company;

	cout << "ȸ��� �Է� : ";
	getline(cin, pizza_company.name);
	cout << "������ ���� �Է� : ";
	cin >> pizza_company.diameter;
	cout << "������ �߷� �Է� : ";
	cin >> pizza_company.weight;

	cout << "ȸ��� : " << pizza_company.name << endl;
	cout << "������ ���� : " << pizza_company.diameter << endl;
	cout << "������ �߷� : " << pizza_company.weight<< endl;

	return 0;
}